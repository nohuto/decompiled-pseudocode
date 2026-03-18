/*
 * XREFs of _SetCursorContents @ 0x1C01C73C4
 * Callers:
 *     NtUserSetCursorContents @ 0x1C01EB330 (NtUserSetCursorContents.c)
 * Callees:
 *     zzzUpdateCursorImage @ 0x1C0089310 (zzzUpdateCursorImage.c)
 *     _DestroyCursor @ 0x1C0098338 (_DestroyCursor.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall SetCursorContents(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx

  if ( a1 != a2 )
  {
    if ( (*(_DWORD *)(a1 + 80) & 8) == 0 && (*(_DWORD *)(a2 + 80) & 8) == 0 )
    {
      v5 = *(_QWORD *)(a1 + 88);
      *(_QWORD *)(a1 + 88) = *(_QWORD *)(a2 + 88);
      v6 = *(_QWORD *)(a2 + 96);
      *(_QWORD *)(a2 + 88) = v5;
      v7 = *(_QWORD *)(a1 + 96);
      *(_QWORD *)(a1 + 96) = v6;
      v8 = *(_QWORD *)(a2 + 128);
      *(_QWORD *)(a2 + 96) = v7;
      v9 = *(_QWORD *)(a1 + 128);
      *(_QWORD *)(a1 + 128) = v8;
      v10 = *(_QWORD *)(a2 + 104);
      *(_QWORD *)(a2 + 128) = v9;
      v11 = *(_QWORD *)(a1 + 104);
      *(_QWORD *)(a1 + 104) = v10;
      LOWORD(v10) = *(_WORD *)(a2 + 84);
      *(_QWORD *)(a2 + 104) = v11;
      *(_WORD *)(a1 + 84) = v10;
      *(_WORD *)(a1 + 86) = *(_WORD *)(a2 + 86);
      *(_DWORD *)(a1 + 140) = *(_DWORD *)(a2 + 140);
      *(_DWORD *)(a1 + 144) = *(_DWORD *)(a2 + 144);
      *(_DWORD *)(a1 + 136) = *(_DWORD *)(a2 + 136);
      *(_WORD *)(a1 + 74) = *(_WORD *)(a2 + 74);
      *(_OWORD *)(a1 + 112) = *(_OWORD *)(a2 + 112);
    }
    DestroyCursor((struct tagCURSOR *)a2, 2LL, a2, a4);
    if ( gpcurLogCurrent == a1 )
    {
      gpcurLogCurrent = 0LL;
      gpcurPhysCurrent = 0LL;
      zzzUpdateCursorImage();
    }
  }
  return 1LL;
}
