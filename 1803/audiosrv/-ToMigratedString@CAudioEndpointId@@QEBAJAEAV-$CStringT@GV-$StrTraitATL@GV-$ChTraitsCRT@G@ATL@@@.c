/*
 * XREFs of ?ToMigratedString@CAudioEndpointId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180042F10
 * Callers:
 *     ?ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@H@Z @ 0x180042DB0 (-ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@.c)
 * Callees:
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x1800184EC (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x180030B4C (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180030BB0 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18009BB24 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall CAudioEndpointId::ToMigratedString(__int64 *a1, __int64 *a2)
{
  __int64 v4; // rdx
  int v5; // edi
  int v6; // r13d
  struct IUnknown *v7; // rcx
  __int16 *v8; // r14
  __int16 v9; // cx
  int v10; // eax
  __int16 v11; // ax
  __int64 v12; // r9
  __int64 v13; // r8
  __int16 v14; // r12
  __int64 v15; // r15
  signed int v16; // ebx
  __int16 v18; // ax
  struct IUnknown *v19; // [rsp+30h] [rbp-20h] BYREF
  __int64 v20; // [rsp+38h] [rbp-18h] BYREF
  __int64 v21; // [rsp+40h] [rbp-10h]
  char v22; // [rsp+90h] [rbp+40h] BYREF
  LPVOID pv; // [rsp+A0h] [rbp+50h] BYREF
  struct IUnknown *v24; // [rsp+A8h] [rbp+58h] BYREF

  ATL::CSimpleStringT<unsigned short,0>::Empty(a2);
  v4 = *a1;
  v5 = 0;
  v19 = 0LL;
  v24 = 0LL;
  v21 = 0LL;
  v20 = 0LL;
  pv = 0LL;
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct IUnknown **))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         v4,
         &v19);
  if ( v6 >= 0 )
  {
    v7 = v24;
    if ( v24 != v19 )
    {
      ATL::AtlComQIPtrAssign(&v24, v19, &GUID_1be09788_6894_4089_8586_9a2a6c265ac5);
      v7 = v24;
    }
    v6 = ((__int64 (__fastcall *)(struct IUnknown *, char *))v7->lpVtbl[1].QueryInterface)(v7, &v22);
    if ( v6 >= 0 )
    {
      v6 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64))v19->lpVtbl[1].QueryInterface)(
             v19,
             &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
             23LL);
      if ( v6 >= 0 )
      {
        v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v21 + 32LL))(v21, 0LL, &v20);
        if ( v6 >= 0 )
        {
          v6 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v20 + 72LL))(v20, &pv);
          if ( v6 >= 0 )
          {
            v8 = (__int16 *)pv;
            v9 = *(_WORD *)pv;
            if ( !*(_WORD *)pv )
              goto LABEL_18;
            do
            {
              v10 = v5 + 1;
              if ( v9 != 35 )
                v10 = v5;
              v5 = v10;
              if ( v10 == 2 )
              {
                v18 = v8[1];
                for ( ++v8; v18 != 35; ++v8 )
                {
                  if ( !v18 )
                    break;
                  v18 = v8[1];
                }
                v5 = 3;
              }
              v11 = _o_towlower();
              v13 = *a2;
              v14 = v11;
              v15 = *(unsigned int *)(*a2 - 16);
              v16 = v15 + 1;
              if ( (int)((*(_DWORD *)(*a2 - 12) - (v15 + 1)) | (1 - *(_DWORD *)(*a2 - 8))) < 0 )
              {
                ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((const void **)a2, v16, v13, v12);
                v13 = *a2;
              }
              *(_WORD *)(v13 + 2 * v15) = v14;
              if ( v16 < 0 || v16 > *(_DWORD *)(*a2 - 12) )
                ATL::AtlThrowImpl(-2147024809);
              *(_DWORD *)(*a2 - 16) = v16;
              ++v8;
              *(_WORD *)(*a2 + 2LL * v16) = 0;
              v9 = *v8;
            }
            while ( *v8 );
          }
        }
      }
    }
  }
  v8 = (__int16 *)pv;
LABEL_18:
  if ( v8 )
  {
    CoTaskMemFree(v8);
    pv = 0LL;
  }
  if ( v6 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioEndpointId::ToMigratedString", 0xFAu, v6);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  if ( v24 )
    ((void (__fastcall *)(struct IUnknown *))v24->lpVtbl->Release)(v24);
  if ( v19 )
    ((void (__fastcall *)(struct IUnknown *))v19->lpVtbl->Release)(v19);
  return (unsigned int)v6;
}
