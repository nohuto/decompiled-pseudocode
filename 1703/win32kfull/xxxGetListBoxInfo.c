/*
 * XREFs of xxxGetListBoxInfo @ 0x1C0211C54
 * Callers:
 *     NtUserGetListBoxInfo @ 0x1C01D9AA0 (NtUserGetListBoxInfo.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C00530C0 (xxxSendTransformableMessageTimeout.c)
 */

__int64 __fastcall xxxGetListBoxInfo(ULONG_PTR a1, __int64 a2)
{
  unsigned int v3; // edi
  __int16 v4; // ax
  __int64 v5; // rcx
  _QWORD *v6; // r14
  PRKPROCESS *v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // esi
  _DWORD *v13; // r14

  v3 = 0;
  if ( a1
    && ((v4 = *(_WORD *)(a1 + 82) & 0x3FFF, v5 = 678LL, v4 == 678)
     || (a2 = *(_QWORD *)(a1 + 168), v5 = gpsi, *(_WORD *)(a2 + 8) == *(_WORD *)(gpsi + 858LL))
      ? (!*(_DWORD *)(a1 + 252)
       ? (v6 = *(_QWORD **)(a1 + 384))
       : (v6 = *(_QWORD **)(a1 + 392)))
      : (v6 = 0LL),
        v6) )
  {
    v7 = *(PRKPROCESS **)(*(_QWORD *)(a1 + 16) + 376LL);
    if ( v7 == (PRKPROCESS *)PsGetCurrentProcessWin32Process(v5, a2) )
    {
      v12 = 0;
    }
    else
    {
      v12 = 1;
      KeAttachProcess(*v7);
    }
    v13 = (_DWORD *)*v6;
    if ( v13 )
    {
      if ( ((PsGetCurrentProcessWow64Process(v9, v8, v10, v11) != 0 ? 0 : 3) & (unsigned int)v13) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (v13[23] & 0x40000) != 0 )
        v3 = v13[19];
      else
        v3 = v13[8];
    }
    if ( v12 )
      KeDetachProcess();
    return v3;
  }
  else
  {
    _InterlockedAdd(&glSendMessage, 1u);
    return xxxSendTransformableMessageTimeout(a1, 0x1B2u, 0LL, 0LL, 0, 0, 0LL, 1, 1);
  }
}
