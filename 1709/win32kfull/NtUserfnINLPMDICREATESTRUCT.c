/*
 * XREFs of NtUserfnINLPMDICREATESTRUCT @ 0x1C013DC00
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitLargeUnicodeString @ 0x1C0093D64 (RtlInitLargeUnicodeString.c)
 *     RtlInitLargeAnsiString @ 0x1C010EAF0 (RtlInitLargeAnsiString.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnINLPMDICREATESTRUCT(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        ULONG64 a4,
        __int64 a5,
        int a6,
        int a7)
{
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int128 v11; // [rsp+40h] [rbp-68h]
  _BYTE v12[16]; // [rsp+78h] [rbp-30h] BYREF
  _BYTE v13[32]; // [rsp+88h] [rbp-20h] BYREF

  if ( a4 >= MmUserProbeAddress )
    a4 = MmUserProbeAddress;
  v11 = *(_OWORD *)a4;
  v7 = *(_QWORD *)(a4 + 8);
  if ( a7 )
  {
    if ( *((_QWORD *)&v11 + 1) )
      v7 = *(_QWORD *)(a4 + 8);
    RtlInitLargeAnsiString((__int64)v12, v7);
    v9 = v11;
    if ( (v11 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( (_QWORD)v11 )
        v9 = v11;
    }
    else
    {
      v9 = 0LL;
    }
    RtlInitLargeAnsiString((__int64)v13, v9);
  }
  else
  {
    if ( *((_QWORD *)&v11 + 1) )
    {
      if ( (BYTE8(v11) & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v7 = *(_QWORD *)(a4 + 8);
    }
    RtlInitLargeUnicodeString((__int64)v12, v7);
    v8 = v11;
    if ( (v11 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( (_QWORD)v11 )
      {
        if ( (v11 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v8 = v11;
      }
    }
    else
    {
      v8 = 0LL;
    }
    RtlInitLargeUnicodeString((__int64)v13, v8);
  }
  return _guard_dispatch_icall_fptr();
}
