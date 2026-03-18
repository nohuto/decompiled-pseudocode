/*
 * XREFs of ?vInit256Rainbow@XEPALOBJ@@QEAAXXZ @ 0x1C009BA8C
 * Callers:
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@PEAUHBITMAP__@@IIPEAEPEAUtagBITMAPINFO@@III@Z @ 0x1C00191EC (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@P.c)
 * Callees:
 *     ?vInit256Default@XEPALOBJ@@QEAAXXZ @ 0x1C009BA30 (-vInit256Default@XEPALOBJ@@QEAAXXZ.c)
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C009BD3C (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
 *     ?MakeITable@@YAHPEAEPEAURGBX@@H@Z @ 0x1C00C3AC0 (-MakeITable@@YAHPEAEPEAURGBX@@H@Z.c)
 */

void __fastcall XEPALOBJ::vInit256Rainbow(XEPALOBJ *this)
{
  char v1; // dl
  char v2; // r8
  char v3; // r11
  __int64 v4; // r9
  __int64 v6; // r10
  unsigned __int8 *v7; // rax
  signed __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // [rsp+38h] [rbp+10h]

  v1 = 0;
  v2 = 0;
  v3 = 0;
  HIBYTE(v11) = 0;
  v4 = 0LL;
  v6 = 256LL;
  do
  {
    LOBYTE(v11) = v3;
    BYTE1(v11) = v2;
    BYTE2(v11) = v1;
    *(_DWORD *)(v4 + *(_QWORD *)(*(_QWORD *)this + 120LL)) = v11;
    v3 += 32;
    if ( !v3 )
    {
      v2 += 32;
      if ( !v2 )
        v1 += 64;
    }
    v4 += 4LL;
    --v6;
  }
  while ( v6 );
  XEPALOBJ::vInit256Default(this);
  if ( gpRGBXlate )
    goto LABEL_5;
  v7 = (unsigned __int8 *)PALLOCMEM2(0x8000uLL);
  v8 = (signed __int64)v7;
  if ( v7 )
  {
    MakeITable(v7, *(struct RGBX **)(*(_QWORD *)this + 120LL), 256);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)gpRGBXlate, v8, 0LL) )
      Win32FreePool(v8, v9, v10);
LABEL_5:
    *(_DWORD *)(*(_QWORD *)this + 104LL) = XEPALOBJ::ulTime(this);
    *(_QWORD *)(*(_QWORD *)this + 112LL) = gpRGBXlate;
    return;
  }
  *(_QWORD *)(*(_QWORD *)this + 112LL) = 0LL;
}
