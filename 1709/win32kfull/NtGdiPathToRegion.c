/*
 * XREFs of NtGdiPathToRegion @ 0x1C02892D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C0017A18 (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C012C170 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C012C1A0 (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?bInactive@DC@@QEAAHXZ @ 0x1C012CC8C (-bInactive@DC@@QEAAHXZ.c)
 */

struct HOBJ__ *__fastcall NtGdiPathToRegion(HDC a1)
{
  DC *v1; // rbx
  ULONG v2; // ecx
  struct HOBJ__ *v3; // rdi
  unsigned int v4; // r8d
  void *v6; // [rsp+20h] [rbp-49h] BYREF
  int v7; // [rsp+28h] [rbp-41h]
  DC *v8[2]; // [rsp+30h] [rbp-39h] BYREF
  _BYTE v9[8]; // [rsp+40h] [rbp-29h] BYREF
  __int64 v10; // [rsp+48h] [rbp-21h]

  DCOBJ::DCOBJ((DCOBJ *)v8, a1);
  v1 = v8[0];
  if ( !v8[0] )
  {
    v2 = 87;
LABEL_5:
    EngSetLastError(v2);
    v3 = 0LL;
    goto LABEL_15;
  }
  if ( !(unsigned int)DC::bInactive(v8[0]) )
  {
    v2 = 1003;
    goto LABEL_5;
  }
  XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v9, v8);
  if ( v10 )
  {
    v4 = *(unsigned __int8 *)(*((_QWORD *)v1 + 10) + 74LL);
    v7 = 0;
    RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v6, (struct EPATHOBJ *)v9, v4, 0LL);
    if ( v6 )
    {
      v3 = RGNOBJ::hrgnAssociate(&v6);
      if ( !v3 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v6);
    }
    else
    {
      v3 = 0LL;
    }
    *((_DWORD *)v1 + 44) &= ~1u;
    DC::hpath(v1, 0LL);
    if ( v7 == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v6);
  }
  else
  {
    EngSetLastError(8u);
    *((_DWORD *)v1 + 44) &= ~1u;
    DC::hpath(v1, 0LL);
    v3 = 0LL;
  }
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v9);
LABEL_15:
  if ( v1 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v8);
  return v3;
}
