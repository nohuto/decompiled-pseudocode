/*
 * XREFs of xxxSetWindowNCMetrics @ 0x1C000A9D0
 * Callers:
 *     UserOnGreTextReady @ 0x1C000A0E0 (UserOnGreTextReady.c)
 *     xxxInitWindowStation @ 0x1C000F9C0 (xxxInitWindowStation.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C00BDAE0 (xxxUpdatePerUserSystemParameters.c)
 *     UserSetWindowNCMetrics @ 0x1C013DB4C (UserSetWindowNCMetrics.c)
 *     ?xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C01B5434 (-xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z.c)
 * Callees:
 *     CreateBitmapStrip @ 0x1C000AD10 (CreateBitmapStrip.c)
 *     ?SetNCMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C000AD54 (-SetNCMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z.c)
 *     xxxSetNCFonts @ 0x1C000BBE4 (xxxSetNCFonts.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall xxxSetWindowNCMetrics(__int64 a1, int *a2, int a3, int a4)
{
  unsigned int v4; // edi
  __int64 result; // rax
  int v9; // esi
  int v10; // eax
  int v11; // ecx
  int v12; // esi
  int v13; // eax
  bool v14; // cc
  int v15; // ecx
  int v16; // ecx
  __int64 SessionSystemDpiMetrics; // rax
  int v18; // edx
  _DWORD *v19; // r14
  __int64 SessionSystemDpiServerInfo; // rax
  int v21; // edx
  int v22; // ecx
  int v23; // eax
  int v24; // ecx
  int v25; // r8d
  _DWORD v26[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v27; // [rsp+40h] [rbp-C0h] BYREF
  int v28; // [rsp+44h] [rbp-BCh]
  int v29; // [rsp+48h] [rbp-B8h]
  int v30; // [rsp+4Ch] [rbp-B4h]
  int v31; // [rsp+50h] [rbp-B0h]
  int v32; // [rsp+54h] [rbp-ACh]
  int v33; // [rsp+B4h] [rbp-4Ch]
  int v34; // [rsp+B8h] [rbp-48h]
  int v35; // [rsp+118h] [rbp+18h]
  int v36; // [rsp+11Ch] [rbp+1Ch]
  int v37; // [rsp+234h] [rbp+134h]

  v4 = 0;
  if ( a3 )
  {
    result = xxxSetNCFonts();
    if ( !(_DWORD)result )
      return result;
    v9 = 1;
    if ( !a2 )
    {
      v27 = 504;
      if ( a4 >= 0 )
      {
        v28 = a4;
      }
      else
      {
        FastGetProfileIntFromID(a1, 23LL, 136LL, 1LL, v26, 0);
        v28 = v26[0];
      }
      FastGetProfileIntFromID(a1, 23LL, 152LL, 16LL, v26, 0);
      v29 = v26[0];
      FastGetProfileIntFromID(a1, 23LL, 153LL, 16LL, v26, 0);
      v30 = v26[0];
      FastGetProfileIntFromID(a1, 23LL, 137LL, 18LL, v26, 0);
      v31 = v26[0];
      FastGetProfileIntFromID(a1, 23LL, 138LL, 18LL, v26, 0);
      v32 = v26[0];
      FastGetProfileIntFromID(a1, 23LL, 140LL, 13LL, v26, 0);
      v33 = v26[0];
      FastGetProfileIntFromID(a1, 23LL, 141LL, 13LL, v26, 0);
      v34 = v26[0];
      FastGetProfileIntFromID(a1, 23LL, 143LL, 18LL, v26, 0);
      v35 = v26[0];
      FastGetProfileIntFromID(a1, 23LL, 144LL, 18LL, v26, 0);
      v36 = v26[0];
      FastGetProfileIntFromID(a1, 23LL, 158LL, 0LL, v26, 0);
      a2 = &v27;
      v37 = v26[0];
    }
    v10 = 50;
    v11 = 0;
    if ( a2[1] > 1 )
      v9 = a2[1];
    if ( v9 < 50 )
      v10 = v9;
    v12 = 8;
    a2[1] = v10;
    if ( a2[125] > 0 )
      v11 = a2[125];
    v13 = 100;
    if ( v11 < 100 )
      v13 = v11;
    v14 = a2[2] <= 8;
    v15 = 8;
    a2[125] = v13;
    if ( !v14 )
      v15 = a2[2];
    v14 = a2[3] <= 8;
    a2[2] = v15;
    v16 = 8;
    if ( !v14 )
      v16 = a2[3];
    a2[3] = v16;
    SessionSystemDpiMetrics = GetSessionSystemDpiMetrics();
    v18 = 8;
    v19 = (_DWORD *)SessionSystemDpiMetrics;
    if ( a2[4] > 8 )
      v18 = a2[4];
    a2[4] = v18;
    SessionSystemDpiServerInfo = GetSessionSystemDpiServerInfo();
    v21 = a2[5];
    if ( v21 <= *(_DWORD *)(SessionSystemDpiServerInfo + 20) + 2 )
      v21 = *(_DWORD *)(GetSessionSystemDpiServerInfo() + 20) + 2;
    v22 = 8;
    v23 = a2[54];
    if ( a2[29] > 8 )
      v22 = a2[29];
    a2[29] = v22;
    a2[5] = v21;
    v24 = v19[11] + 2;
    if ( a2[30] > v24 )
      v24 = a2[30];
    a2[30] = v24;
    if ( v23 > 8 )
      v12 = v23;
    a2[54] = v12;
    v25 = v19[5] + 2 + v19[3];
    if ( a2[55] > v25 )
      v25 = a2[55];
    a2[55] = v25;
    SetNCMetrics((struct tagNONCLIENTMETRICSW *)a2);
  }
  LOBYTE(v4) = (unsigned int)CreateBitmapStrip() != 0;
  return v4;
}
