/*
 * XREFs of XilCoreCommand_AllocateResources @ 0x1C003FF04
 * Callers:
 *     XilCommand_AllocateResources @ 0x1C000EB18 (XilCommand_AllocateResources.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001A20 (WPP_RECORDER_SF_.c)
 *     CommonBuffer_AcquireBuffer @ 0x1C000F6FC (CommonBuffer_AcquireBuffer.c)
 */

__int64 __fastcall XilCoreCommand_AllocateResources(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 result; // rax

  v2 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
  v3 = *(_QWORD *)(v2 + 88);
  v4 = CommonBuffer_AcquireBuffer(*(PVOID *)(v2 + 120), 512, a1, 828665155);
  *(_QWORD *)(a1 + 16) = v4;
  result = 0LL;
  if ( v4 )
  {
    *(_DWORD *)(a1 + 32) = 31;
    *(_QWORD *)(a1 + 48) = *(_QWORD *)(v4 + 16);
    *(_QWORD *)(a1 + 24) = *(_QWORD *)(v4 + 24) + 496LL;
    *(_QWORD *)(a1 + 8) = *(_QWORD *)(v3 + 32) + 24LL;
    *(_QWORD *)(a1 + 56) = *(_QWORD *)(v3 + 48);
  }
  else
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)a1 + 16LL),
      2u,
      7u,
      0xAu,
      (__int64)&WPP_003a8e912c223c24bd26069b3a550c89_Traceguids);
    return 3221225626LL;
  }
  return result;
}
