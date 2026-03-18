/*
 * XREFs of NtGdiPathToRegion @ 0x1C028C7B0
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750D4 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C007E9CC (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0123100 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C0123130 (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?bInactive@DC@@QEAAHXZ @ 0x1C01248E4 (-bInactive@DC@@QEAAHXZ.c)
 */

struct HOBJ__ *__fastcall NtGdiPathToRegion(HDC a1)
{
  DC *v1; // rdi
  struct HOBJ__ *v2; // rbx
  ULONG v3; // ecx
  unsigned int v4; // r8d
  struct HOBJ__ *v5; // rsi
  void *v7; // [rsp+28h] [rbp-49h] BYREF
  int v8; // [rsp+30h] [rbp-41h]
  DC *v9[2]; // [rsp+38h] [rbp-39h] BYREF
  char v10[8]; // [rsp+48h] [rbp-29h] BYREF
  __int64 v11; // [rsp+50h] [rbp-21h]

  DCOBJ::DCOBJ((DCOBJ *)v9, a1);
  v1 = v9[0];
  v2 = 0LL;
  if ( !v9[0] )
  {
    v3 = 87;
LABEL_5:
    EngSetLastError(v3);
    goto LABEL_15;
  }
  if ( !(unsigned int)DC::bInactive(v9[0]) )
  {
    v3 = 1003;
    goto LABEL_5;
  }
  XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v10, v9);
  if ( v11 )
  {
    v4 = *(unsigned __int8 *)(*((_QWORD *)v1 + 10) + 74LL);
    v8 = 0;
    RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v7, (struct EPATHOBJ *)v10, v4, 0LL);
    if ( v7 )
    {
      v5 = RGNOBJ::hrgnAssociate(&v7);
      if ( !v5 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v7);
    }
    else
    {
      v5 = 0LL;
    }
    *((_DWORD *)v1 + 44) &= ~1u;
    DC::hpath(v1, 0LL);
    v2 = v5;
    if ( v8 == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v7);
  }
  else
  {
    EngSetLastError(8u);
    *((_DWORD *)v1 + 44) &= ~1u;
    DC::hpath(v1, 0LL);
  }
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v10);
LABEL_15:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v9);
  return v2;
}
