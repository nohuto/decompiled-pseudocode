/*
 * XREFs of NtGdiWidenPath @ 0x1C0289680
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C001B89C (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C00E93EC (-bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ?bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C00E9480 (-bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C012C170 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C012C1A0 (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?bInactive@DC@@QEAAHXZ @ 0x1C012CC8C (-bInactive@DC@@QEAAHXZ.c)
 *     ?vReComputeBounds@EPATHOBJ@@QEAAXXZ @ 0x1C02A74E8 (-vReComputeBounds@EPATHOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiWidenPath(HDC a1)
{
  ULONG v1; // ecx
  unsigned int v2; // ebx
  struct _LINEATTRS *v3; // rdi
  ULONG v4; // ecx
  DC *v6[2]; // [rsp+20h] [rbp-49h] BYREF
  struct _XFORMOBJ v7; // [rsp+30h] [rbp-39h] BYREF
  __m128i *v8[16]; // [rsp+40h] [rbp-29h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v6, a1);
  if ( !v6[0] )
  {
    v1 = 87;
LABEL_5:
    EngSetLastError(v1);
    v2 = 0;
    goto LABEL_18;
  }
  if ( !(unsigned int)DC::bInactive(v6[0]) )
  {
    v1 = 1003;
    goto LABEL_5;
  }
  XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v8, v6);
  if ( !v8[1] )
    goto LABEL_14;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v7, (struct XDCOBJ *)v6, 516);
  v2 = 1;
  v3 = (struct _LINEATTRS *)((char *)v6[0] + 184);
  if ( (*((_DWORD *)v6[0] + 46) & 1) != 0 )
  {
LABEL_11:
    if ( !(unsigned int)EPATHOBJ::bComputeWidenedBounds((EPATHOBJ *)v8, (struct EPATHOBJ *)v8, &v7, v3) )
    {
      v4 = 534;
      goto LABEL_15;
    }
    if ( (unsigned int)EPATHOBJ::bWiden((EPATHOBJ *)v8, v8, &v7, v3) )
    {
      EPATHOBJ::vReComputeBounds((EPATHOBJ *)v8);
      goto LABEL_17;
    }
LABEL_14:
    v4 = 8;
    goto LABEL_15;
  }
  if ( (*(_DWORD *)(*((_QWORD *)v6[0] + 19) + 48LL) & 0x800) != 0 )
  {
    v3 = (struct _LINEATTRS *)&unk_1C0325C40;
    goto LABEL_11;
  }
  v4 = 1003;
LABEL_15:
  EngSetLastError(v4);
  v2 = 0;
LABEL_17:
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v8);
LABEL_18:
  if ( v6[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v6);
  return v2;
}
