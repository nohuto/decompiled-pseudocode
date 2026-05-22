/*
 * XREFs of ?MPCSharedWorldInputTarget_DeliverInput_@ISMTracing@@QEAAXPEAUIInputTarget@@KPEAUInputInfo@@_N@Z @ 0x18008837C
 * Callers:
 *     ?InternalDeliverInput@MPCSharedWorldInputTarget@@AEAAJPEAUInputInfo@@_N@Z @ 0x180088A88 (-InternalDeliverInput@MPCSharedWorldInputTarget@@AEAAJPEAUInputInfo@@_N@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180044860 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z @ 0x18004A354 (-GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::MPCSharedWorldInputTarget_DeliverInput_(
        ISMTracing *this,
        struct IInputTarget *a2,
        int a3,
        struct InputInfo *a4,
        bool a5)
{
  __int64 v7; // rcx
  __int64 v8; // rbx
  int PIDOfTarget; // eax
  int v10; // [rsp+30h] [rbp-D0h] BYREF
  int v11; // [rsp+34h] [rbp-CCh] BYREF
  int v12; // [rsp+38h] [rbp-C8h] BYREF
  int v13; // [rsp+3Ch] [rbp-C4h] BYREF
  int v14; // [rsp+40h] [rbp-C0h] BYREF
  struct IInputTarget *v15; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  struct IInputTarget **v17; // [rsp+70h] [rbp-90h]
  int v18; // [rsp+78h] [rbp-88h]
  int v19; // [rsp+7Ch] [rbp-84h]
  int *v20; // [rsp+80h] [rbp-80h]
  int v21; // [rsp+88h] [rbp-78h]
  int v22; // [rsp+8Ch] [rbp-74h]
  int *v23; // [rsp+90h] [rbp-70h]
  int v24; // [rsp+98h] [rbp-68h]
  int v25; // [rsp+9Ch] [rbp-64h]
  int *v26; // [rsp+A0h] [rbp-60h]
  int v27; // [rsp+A8h] [rbp-58h]
  int v28; // [rsp+ACh] [rbp-54h]
  int *v29; // [rsp+B0h] [rbp-50h]
  int v30; // [rsp+B8h] [rbp-48h]
  int v31; // [rsp+BCh] [rbp-44h]
  char *v32; // [rsp+C0h] [rbp-40h]
  int v33; // [rsp+C8h] [rbp-38h]
  int v34; // [rsp+CCh] [rbp-34h]
  char *v35; // [rsp+D0h] [rbp-30h]
  int v36; // [rsp+D8h] [rbp-28h]
  int v37; // [rsp+DCh] [rbp-24h]
  int *v38; // [rsp+E0h] [rbp-20h]
  int v39; // [rsp+E8h] [rbp-18h]
  int v40; // [rsp+ECh] [rbp-14h]
  int *v41; // [rsp+F0h] [rbp-10h]
  int v42; // [rsp+F8h] [rbp-8h]
  int v43; // [rsp+FCh] [rbp-4h]
  bool *v44; // [rsp+100h] [rbp+0h]
  int v45; // [rsp+108h] [rbp+8h]
  int v46; // [rsp+10Ch] [rbp+Ch]
  int v47; // [rsp+150h] [rbp+50h] BYREF

  v47 = a3;
  v7 = *((_QWORD *)ISMTracing::Instance() + 1);
  if ( *(_DWORD *)v7 > 5u && (*(_BYTE *)(v7 + 16) & 1) != 0 && (*(_QWORD *)(v7 + 24) & 1LL) == *(_QWORD *)(v7 + 24) )
  {
    v8 = *((_QWORD *)ISMTracing::Instance() + 1);
    if ( *(_DWORD *)v8 > 5u && (*(_BYTE *)(v8 + 16) & 1) != 0 && (*(_QWORD *)(v8 + 24) & 1LL) == *(_QWORD *)(v8 + 24) )
    {
      v19 = 0;
      v17 = &v15;
      v15 = a2;
      v18 = 8;
      PIDOfTarget = ISMTracing::GetPIDOfTarget(a2);
      v22 = 0;
      v25 = 0;
      v28 = 0;
      v31 = 0;
      v34 = 0;
      v37 = 0;
      v40 = 0;
      v43 = 0;
      v46 = 0;
      v10 = PIDOfTarget;
      v20 = &v10;
      v23 = &v47;
      v11 = *(_DWORD *)a4;
      v26 = &v11;
      v12 = *((_DWORD *)a4 + 1);
      v29 = &v12;
      v32 = (char *)a4 + 8;
      v35 = (char *)a4 + 528;
      v13 = *((_DWORD *)a4 + 130);
      v38 = &v13;
      v14 = *((_DWORD *)a4 + 131);
      v41 = &v14;
      v44 = &a5;
      v21 = 4;
      v24 = 4;
      v27 = 4;
      v30 = 4;
      v33 = 4;
      v36 = 4;
      v39 = 4;
      v42 = 4;
      v45 = 1;
      TlgWrite((TraceLoggingHProvider)v8, &unk_18010FA40, 0LL, 0LL, 0xCu, &pData);
    }
  }
}
