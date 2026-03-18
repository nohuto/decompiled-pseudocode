/*
 * XREFs of GreScaleWindowExtEx @ 0x1C013A960
 * Callers:
 *     NtGdiScaleWindowExtEx @ 0x1C013A920 (NtGdiScaleWindowExtEx.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?MirrorWindowOrg@DC@@QEAAXXZ @ 0x1C0028CC4 (-MirrorWindowOrg@DC@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreScaleWindowExtEx(HDC a1, int a2, int a3, int a4, int a5, _QWORD *a6)
{
  unsigned int v9; // ebx
  DC *v10; // r11
  _DWORD *v11; // rcx
  int v13; // eax
  int v14; // r9d
  __int64 v15; // r11
  DC *v16[3]; // [rsp+20h] [rbp-18h] BYREF

  v9 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v16, a1);
  v10 = v16[0];
  if ( v16[0] )
  {
    if ( a6 )
    {
      *a6 = *(_QWORD *)(*((_QWORD *)v16[0] + 10) + 328LL);
      if ( (*(_DWORD *)(*((_QWORD *)v10 + 10) + 312LL) & 1) != 0 )
        *(_DWORD *)a6 = -*(_DWORD *)a6;
    }
    v11 = (_DWORD *)*((_QWORD *)v10 + 10);
    if ( v11[77] > 6u )
    {
      v13 = a2 * v11[82];
      v14 = a4 * v11[83];
      if ( !a3 || !a5 || v13 == 0x80000000 && a3 == -1 || v14 == 0x80000000 && a5 == -1 || !(v13 / a3) || !(v14 / a5) )
        goto LABEL_7;
      v11[82] = v13 / a3;
      *(_DWORD *)(*((_QWORD *)v10 + 10) + 332LL) = v14 / a5;
      DC::MirrorWindowOrg(v10);
      *(_DWORD *)(*(_QWORD *)(v15 + 80) + 352LL) |= 0x4090u;
    }
    v9 = 1;
LABEL_7:
    XDCOBJ::vUnlockFast((XDCOBJ *)v16);
  }
  return v9;
}
