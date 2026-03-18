/*
 * XREFs of xxxGetListBoxInfo @ 0x1C0213174
 * Callers:
 *     NtUserGetListBoxInfo @ 0x1C01E6300 (NtUserGetListBoxInfo.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C00A8A60 (xxxSendTransformableMessageTimeout.c)
 */

__int64 __fastcall xxxGetListBoxInfo(ULONG_PTR BugCheckParameter2)
{
  unsigned int v2; // edi
  __int16 v3; // ax
  __int64 v4; // rcx
  _QWORD *v5; // r14
  PRKPROCESS *v6; // r15
  __int64 v7; // rcx
  int v8; // esi
  _DWORD *v9; // r14

  v2 = 0;
  if ( BugCheckParameter2
    && ((v3 = *(_WORD *)(BugCheckParameter2 + 82) & 0x3FFF, v4 = 678LL, v3 == 678)
     || (v4 = gpsi, *(_WORD *)(*(_QWORD *)(BugCheckParameter2 + 168) + 8LL) == *(_WORD *)(gpsi + 858LL))
      ? (!*(_DWORD *)(BugCheckParameter2 + 252)
       ? (v5 = *(_QWORD **)(BugCheckParameter2 + 384))
       : (v5 = *(_QWORD **)(BugCheckParameter2 + 392)))
      : (v5 = 0LL),
        v5) )
  {
    v6 = *(PRKPROCESS **)(*(_QWORD *)(BugCheckParameter2 + 16) + 400LL);
    if ( v6 == (PRKPROCESS *)PsGetCurrentProcessWin32Process(v4) )
    {
      v8 = 0;
    }
    else
    {
      v8 = 1;
      KeAttachProcess(*v6);
    }
    v9 = (_DWORD *)*v5;
    if ( v9 )
    {
      if ( ((PsGetCurrentProcessWow64Process(v7) != 0 ? 0 : 3) & (unsigned int)v9) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (v9[23] & 0x40000) != 0 )
        v2 = v9[19];
      else
        v2 = v9[8];
    }
    if ( v8 )
      KeDetachProcess();
    return v2;
  }
  else
  {
    _InterlockedAdd(&glSendMessage, 1u);
    return xxxSendTransformableMessageTimeout((__int64 *)BugCheckParameter2, 434LL, 0LL, 0LL, 0, 0, 0LL, 1u, 1);
  }
}
