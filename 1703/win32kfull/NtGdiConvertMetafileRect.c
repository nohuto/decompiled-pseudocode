/*
 * XREFs of NtGdiConvertMetafileRect @ 0x1C0295560
 * Callers:
 *     <none>
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C007E0B0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0095500 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiConvertMetafileRect(HDC a1, struct _POINTFIX a2)
{
  _OWORD *v2; // rdi
  __int128 *v3; // rax
  unsigned int v4; // ebx
  FIX x; // r8d
  FIX v6; // ecx
  FIX v7; // eax
  FIX y; // r9d
  FIX v9; // edx
  FIX v10; // eax
  FIX v11; // edx
  HDC v13[2]; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v14[2]; // [rsp+38h] [rbp-40h] BYREF
  struct _POINTFIX v15; // [rsp+48h] [rbp-30h] BYREF
  FIX v16; // [rsp+50h] [rbp-28h]
  FIX v17; // [rsp+54h] [rbp-24h]
  __int128 v18; // [rsp+58h] [rbp-20h] BYREF

  v2 = (_OWORD *)a2;
  v13[0] = a1;
  v15 = a2;
  v3 = (__int128 *)a2;
  if ( *(unsigned __int64 *)&a2 >= W32UserProbeAddress )
    v3 = (__int128 *)W32UserProbeAddress;
  v18 = *v3;
  v4 = 2;
  DCOBJ::DCOBJ((DCOBJ *)v13, a1);
  if ( !v13[0] )
    goto LABEL_18;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v14, (struct XDCOBJ *)v13, 516);
  if ( !v14[0] || !EXFORMOBJ::bXform((EXFORMOBJ *)v14, (struct _POINTL *)&v18, &v15, 2uLL) )
    goto LABEL_18;
  x = v15.x;
  v6 = v16;
  if ( v15.x > v16 )
  {
    v7 = v15.x;
    x = v16;
    v15.x = v16;
    v6 = v7;
  }
  y = v15.y;
  v9 = v17;
  if ( v15.y > v17 )
  {
    v10 = v15.y;
    y = v17;
    v15.y = v17;
    v9 = v10;
  }
  v16 = v6 - 16;
  v11 = v9 - 16;
  v17 = v11;
  if ( v6 - 16 < x || v11 < y )
    v4 = 1;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v14, (struct XDCOBJ *)v13, 1026);
  if ( v14[0] && EXFORMOBJ::bXform((EXFORMOBJ *)v14, &v15, (struct _POINTL *)&v18, 2uLL) )
  {
    if ( (unsigned __int64)v2 >= W32UserProbeAddress )
      v2 = (_OWORD *)W32UserProbeAddress;
    *v2 = v18;
  }
  else
  {
LABEL_18:
    v4 = 0;
  }
  DCOBJ::~DCOBJ((DCOBJ *)v13);
  if ( !v4 )
    EngSetLastError(0x57u);
  return v4;
}
