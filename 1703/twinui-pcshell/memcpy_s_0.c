/*
 * XREFs of memcpy_s_0 @ 0x180026E14
 * Callers:
 *     ?Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z @ 0x180027758 (-Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x18002784C (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x180027D00 (-FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@.c)
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x180027FC4 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 *     _lambda_057488ec2a114cea6fb77af5c8c7453a_::operator() @ 0x18002857C (_lambda_057488ec2a114cea6fb77af5c8c7453a_--operator().c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x180194E10 (_invalid_parameter_noinfo.c)
 *     memset @ 0x180194E50 (memset.c)
 *     memcpy_0 @ 0x1801976BE (memcpy_0.c)
 */

errno_t __cdecl memcpy_s_0(
        void *const Destination,
        const rsize_t DestinationSize,
        const void *const Source,
        const rsize_t SourceSize)
{
  errno_t *v7; // rax
  errno_t v8; // ebx

  if ( !Destination )
    goto LABEL_2;
  if ( Source && DestinationSize >= SourceSize )
  {
    memcpy_0(Destination, Source, SourceSize);
    return 0;
  }
  else
  {
    memset(Destination, 0, DestinationSize);
    if ( !Source )
    {
LABEL_2:
      v7 = (errno_t *)_o__errno();
      v8 = 22;
LABEL_3:
      *v7 = v8;
      invalid_parameter_noinfo();
      return v8;
    }
    if ( DestinationSize < SourceSize )
    {
      v7 = (errno_t *)_o__errno();
      v8 = 34;
      goto LABEL_3;
    }
    return 22;
  }
}
