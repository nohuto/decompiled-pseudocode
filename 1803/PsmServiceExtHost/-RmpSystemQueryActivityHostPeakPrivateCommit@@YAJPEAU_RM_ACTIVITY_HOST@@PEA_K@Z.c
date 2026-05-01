/*
 * XREFs of ?RmpSystemQueryActivityHostPeakPrivateCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x180061A50
 * Callers:
 *     ?UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z @ 0x18001C5F4 (-UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmpSystemQueryActivityHostPeakPrivateCommit(struct _RM_ACTIVITY_HOST *a1, unsigned __int64 *a2)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, _QWORD, unsigned __int64 *))(*(_QWORD *)(*((_QWORD *)a1 + 6) + 40LL) + 24LL))(
             (char *)a1 + 552,
             *((unsigned int *)a1 + 155),
             (char *)a1 + 88,
             *((unsigned int *)a1 + 156),
             *((_QWORD *)a1 + 4),
             0LL,
             a2);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
