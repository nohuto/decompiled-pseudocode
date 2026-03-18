/*
 * XREFs of ?MNDrawMenu3DHotTracking@@YAXPEAUHDC__@@PEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C0215EBC
 * Callers:
 *     xxxDrawMenuItem @ 0x1C007FB1C (xxxDrawMenuItem.c)
 * Callees:
 *     NtGdiPatBlt @ 0x1C001D870 (NtGdiPatBlt.c)
 */

void __fastcall MNDrawMenu3DHotTracking(HDC a1, struct tagMENU *a2, struct tagITEM *a3)
{
  int v5; // edx
  __int64 v6; // rax
  __int64 v7; // r12
  unsigned int v8; // edx
  int v9; // ebp
  int v10; // r15d
  int v11; // edi
  int v12; // esi
  __int64 v13; // r14

  if ( (!*((_QWORD *)a3 + 13) || (*((_DWORD *)a3 + 1) & 0x20000000) == 0) && (*((_DWORD *)a2 + 14) & 1) == 0 )
  {
    v5 = *((_DWORD *)a3 + 1);
    if ( (v5 & 0x80u) == 0 )
    {
      if ( (v5 & 0x100) == 0 )
      {
        if ( (v5 & 0x10000000) == 0 )
          return;
        v6 = *((_QWORD *)a2 + 16);
        if ( !v6 )
          v6 = *(_QWORD *)(gpsi + 4712LL);
        v8 = v5 & 0xEFFFFFFF;
        v7 = v6;
        goto LABEL_13;
      }
      v6 = *(_QWORD *)(gpsi + 4840LL);
      v7 = *(_QWORD *)(gpsi + 4808LL);
    }
    else
    {
      v6 = *(_QWORD *)(gpsi + 4808LL);
      v7 = *(_QWORD *)(gpsi + 4840LL);
    }
    v8 = v5 | 0x10000000;
LABEL_13:
    v9 = *((_DWORD *)a3 + 18);
    v10 = *((_DWORD *)a3 + 19);
    v11 = *((_DWORD *)a3 + 20);
    v12 = *((_DWORD *)a3 + 21);
    *((_DWORD *)a3 + 1) = v8;
    v13 = GreSelectBrush(a1, v6);
    NtGdiPatBlt(a1, v9, v10, v11 - 1, 1, 15728673);
    NtGdiPatBlt(a1, v9, v10, 1, v12 - 1, 15728673);
    GreSelectBrush(a1, v7);
    NtGdiPatBlt(a1, v9, v12 + v10 - 1, v11 - 1, 1, 15728673);
    NtGdiPatBlt(a1, v11 + v9 - 1, v10, 1, v12, 15728673);
    GreSelectBrush(a1, v13);
  }
}
