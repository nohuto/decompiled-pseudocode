/*
 * XREFs of NtGdiWidenPath @ 0x1C028CB30
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750D4 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0095500 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0123100 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C0123130 (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C01238A8 (-bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ?bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C012393C (-bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ?bInactive@DC@@QEAAHXZ @ 0x1C01248E4 (-bInactive@DC@@QEAAHXZ.c)
 *     ?vReComputeBounds@EPATHOBJ@@QEAAXXZ @ 0x1C02AAE80 (-vReComputeBounds@EPATHOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiWidenPath(HDC a1)
{
  unsigned int v1; // ebx
  ULONG v2; // ecx
  struct _LINEATTRS *v3; // rdi
  ULONG v4; // ecx
  DC *v6[2]; // [rsp+20h] [rbp-49h] BYREF
  struct _XFORMOBJ v7; // [rsp+30h] [rbp-39h] BYREF
  __m128i *v8[16]; // [rsp+40h] [rbp-29h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v6, a1);
  v1 = 0;
  if ( v6[0] )
  {
    if ( !(unsigned int)DC::bInactive(v6[0]) )
    {
      v2 = 1003;
      goto LABEL_5;
    }
    XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v8, v6);
    if ( v8[1] )
    {
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v7, (struct XDCOBJ *)v6, 516);
      v3 = (struct _LINEATTRS *)((char *)v6[0] + 184);
      if ( (*((_DWORD *)v6[0] + 46) & 1) == 0 )
      {
        if ( (*(_DWORD *)(*((_QWORD *)v6[0] + 19) + 48LL) & 0x800) == 0 )
        {
          v4 = 1003;
LABEL_15:
          EngSetLastError(v4);
LABEL_17:
          XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v8);
          goto LABEL_18;
        }
        v3 = (struct _LINEATTRS *)&unk_1C0329C40;
      }
      if ( !(unsigned int)EPATHOBJ::bComputeWidenedBounds((EPATHOBJ *)v8, (struct EPATHOBJ *)v8, &v7, v3) )
      {
        v4 = 534;
        goto LABEL_15;
      }
      if ( (unsigned int)EPATHOBJ::bWiden((EPATHOBJ *)v8, v8, &v7, v3) )
      {
        EPATHOBJ::vReComputeBounds((EPATHOBJ *)v8);
        v1 = 1;
        goto LABEL_17;
      }
    }
    v4 = 8;
    goto LABEL_15;
  }
  v2 = 87;
LABEL_5:
  EngSetLastError(v2);
LABEL_18:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v6);
  return v1;
}
