/*
 * XREFs of NtGdiSelectClipPath @ 0x1C0122C80
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750D4 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?iSelect@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C007B9B0 (-iSelect@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C009C064 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0123100 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C0123130 (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?bInactive@DC@@QEAAHXZ @ 0x1C01248E4 (-bInactive@DC@@QEAAHXZ.c)
 */

_BOOL8 __fastcall NtGdiSelectClipPath(HDC a1, int a2)
{
  DC *v3; // rdi
  BOOL v4; // ebx
  unsigned int v5; // r8d
  ULONG v7; // ecx
  struct REGION *v8; // [rsp+28h] [rbp-49h] BYREF
  int v9; // [rsp+30h] [rbp-41h]
  DC *v10[2]; // [rsp+38h] [rbp-39h] BYREF
  _BYTE v11[8]; // [rsp+48h] [rbp-29h] BYREF
  __int64 v12; // [rsp+50h] [rbp-21h]

  DCOBJ::DCOBJ((DCOBJ *)v10, a1);
  v3 = v10[0];
  v4 = 0;
  if ( !v10[0] || (unsigned int)(a2 - 1) > 4 )
  {
    v7 = 87;
    goto LABEL_13;
  }
  if ( !(unsigned int)DC::bInactive(v10[0]) )
  {
    v7 = 1003;
LABEL_13:
    EngSetLastError(v7);
    goto LABEL_9;
  }
  XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v11, (struct XDCOBJ *)v10);
  if ( v12 )
  {
    v5 = *(unsigned __int8 *)(*((_QWORD *)v3 + 10) + 74LL);
    v9 = 0;
    RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v8, (struct EPATHOBJ *)v11, v5, 0LL);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v8);
    if ( v8 )
      v4 = DC::iSelect(v3, v8, a2) != 0;
    *((_DWORD *)v3 + 44) &= ~1u;
    DC::hpath(v3, 0LL);
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v8);
  }
  else
  {
    EngSetLastError(8u);
    *((_DWORD *)v3 + 44) &= ~1u;
    DC::hpath(v3, 0LL);
  }
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v11);
LABEL_9:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v10);
  return v4;
}
