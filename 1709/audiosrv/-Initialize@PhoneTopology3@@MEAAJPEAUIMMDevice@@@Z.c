/*
 * XREFs of ?Initialize@PhoneTopology3@@MEAAJPEAUIMMDevice@@@Z @ 0x1800EBDE0
 * Callers:
 *     <none>
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180030BA4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?CreateInstance@TelephonyController@@SAJPEAPEAUITelephonyController@@@Z @ 0x1800ED4A4 (-CreateInstance@TelephonyController@@SAJPEAPEAUITelephonyController@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall PhoneTopology3::Initialize(char *pv, struct IMMDevice *a2)
{
  signed int Instance; // ebx
  HANDLE EventW; // rax
  signed int LastError; // eax
  struct _TP_WAIT *ThreadpoolWait; // rax
  __int64 v8; // rax
  int v9; // eax
  __int64 v11; // [rsp+30h] [rbp-50h] BYREF
  struct IUnknown *v12; // [rsp+38h] [rbp-48h] BYREF
  __int64 v13; // [rsp+40h] [rbp-40h] BYREF
  __int64 v14; // [rsp+48h] [rbp-38h] BYREF
  __int64 v15; // [rsp+50h] [rbp-30h]
  __int64 v16; // [rsp+58h] [rbp-28h]
  GUID v17; // [rsp+60h] [rbp-20h] BYREF

  v16 = -2LL;
  v15 = 0LL;
  v14 = 0LL;
  v13 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v17 = GUID_00000000_0000_0000_0000_000000000000;
  if ( a2 )
  {
    EventW = CreateEventW(0LL, 0, 0, 0LL);
    *((_QWORD *)pv + 7) = EventW;
    if ( (((unsigned __int64)EventW + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      goto LABEL_7;
    LastError = GetLastError();
    Instance = LastError;
    if ( LastError > 0 )
      Instance = (unsigned __int16)LastError | 0x80070000;
    if ( Instance >= 0 )
    {
LABEL_7:
      ThreadpoolWait = CreateThreadpoolWait(PhoneTopology3::s_WorkerThreadProc, pv, 0LL);
      *((_QWORD *)pv + 6) = ThreadpoolWait;
      if ( ThreadpoolWait )
      {
        SetThreadpoolWait(ThreadpoolWait, *((HANDLE *)pv + 7), 0LL);
        Instance = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64))a2->lpVtbl->Activate)(
                     a2,
                     &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
                     23LL);
        if ( Instance >= 0 )
        {
          Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v15 + 32LL))(v15, 0LL, &v14);
          if ( Instance >= 0 )
          {
            Instance = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 64LL))(v14, &v13);
            if ( Instance >= 0 )
            {
              Instance = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v13)(
                           v13,
                           &GUID_ae2de0e4_5bca_4f2d_aa46_5d13f8fdb3a9,
                           &v11);
              if ( Instance >= 0 )
              {
                Instance = (*(__int64 (__fastcall **)(__int64, GUID *))(*(_QWORD *)v11 + 56LL))(v11, &v17);
                if ( Instance >= 0 )
                {
                  Instance = (*(__int64 (__fastcall **)(__int64, struct IUnknown **))(*(_QWORD *)v11 + 96LL))(v11, &v12);
                  if ( Instance >= 0 )
                  {
                    v8 = *(_QWORD *)&v17.Data1 - *(_QWORD *)&GUID_686d7cc0_d903_4258_b443_3a3d3580741c.Data1;
                    if ( *(_QWORD *)&v17.Data1 == *(_QWORD *)&GUID_686d7cc0_d903_4258_b443_3a3d3580741c.Data1 )
                      v8 = *(_QWORD *)v17.Data4 - *(_QWORD *)GUID_686d7cc0_d903_4258_b443_3a3d3580741c.Data4;
                    if ( v8 )
                    {
                      Instance = -2147467259;
                    }
                    else
                    {
                      if ( *((struct IUnknown **)pv + 4) != v12 )
                        ATL::AtlComPtrAssign((struct IUnknown **)pv + 4, v12);
                      Instance = TelephonyController::CreateInstance((struct ITelephonyController **)pv + 5);
                      if ( Instance >= 0 )
                      {
                        v9 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)pv + 5) + 56LL))(
                               *((_QWORD *)pv + 5),
                               pv + 272);
                        Instance = 0;
                        if ( v9 < 0 )
                          Instance = v9;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else
      {
        Instance = -2147024882;
      }
    }
  }
  else
  {
    Instance = -2147024809;
  }
  if ( v12 )
    ((void (__fastcall *)(struct IUnknown *))v12->lpVtbl->Release)(v12);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  return (unsigned int)Instance;
}
