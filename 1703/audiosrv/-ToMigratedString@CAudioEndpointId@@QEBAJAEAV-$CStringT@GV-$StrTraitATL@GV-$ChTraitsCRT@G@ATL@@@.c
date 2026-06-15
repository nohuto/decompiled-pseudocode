/*
 * XREFs of ?ToMigratedString@CAudioEndpointId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180032070
 * Callers:
 *     ?ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@H@Z @ 0x180031F44 (-ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@.c)
 * Callees:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180023520 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x180023600 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x18002DAEC (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18007F6A4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall CAudioEndpointId::ToMigratedString(__int64 *a1, __int64 *a2)
{
  __int64 v4; // rdx
  int v5; // r14d
  int v6; // r13d
  struct IUnknown *v7; // rcx
  unsigned __int16 *v8; // rdi
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r9
  __int16 v12; // r12
  __int64 v13; // r15
  signed int v14; // ebx
  unsigned __int16 v16; // ax
  struct IUnknown *v17; // [rsp+30h] [rbp-20h] BYREF
  __int64 v18; // [rsp+38h] [rbp-18h] BYREF
  __int64 v19; // [rsp+40h] [rbp-10h]
  char v20; // [rsp+90h] [rbp+40h] BYREF
  LPVOID pv; // [rsp+A0h] [rbp+50h] BYREF
  struct IUnknown *v22; // [rsp+A8h] [rbp+58h] BYREF

  ATL::CSimpleStringT<unsigned short,0>::Empty(a2);
  v4 = *a1;
  v5 = 0;
  v17 = 0LL;
  v22 = 0LL;
  v19 = 0LL;
  v18 = 0LL;
  pv = 0LL;
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct IUnknown **))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         v4,
         &v17);
  if ( v6 >= 0 )
  {
    v7 = v22;
    if ( v22 != v17 )
    {
      ATL::AtlComQIPtrAssign(&v22, v17, &GUID_1be09788_6894_4089_8586_9a2a6c265ac5);
      v7 = v22;
    }
    v6 = ((__int64 (__fastcall *)(struct IUnknown *, char *))v7->lpVtbl[1].QueryInterface)(v7, &v20);
    if ( v6 >= 0 )
    {
      v6 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64))v17->lpVtbl[1].QueryInterface)(
             v17,
             &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
             23LL);
      if ( v6 >= 0 )
      {
        v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v19 + 32LL))(v19, 0LL, &v18);
        if ( v6 >= 0 )
        {
          v6 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v18 + 72LL))(v18, &pv);
          if ( v6 >= 0 )
          {
            v8 = (unsigned __int16 *)pv;
            if ( !*(_WORD *)pv )
              goto LABEL_18;
            do
            {
              v9 = v5 + 1;
              if ( *v8 != 35 )
                v9 = v5;
              v5 = v9;
              if ( v9 == 2 )
              {
                v16 = v8[1];
                for ( ++v8; v16 != 35; ++v8 )
                {
                  if ( !v16 )
                    break;
                  v16 = v8[1];
                }
                v5 = 3;
              }
              v12 = _o_towlower(*v8);
              v13 = *(unsigned int *)(*a2 - 16);
              v14 = v13 + 1;
              if ( (int)((*(_DWORD *)(*a2 - 12) - (v13 + 1)) | (1 - *(_DWORD *)(*a2 - 8))) < 0 )
                ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((const void **)a2, v14, v10, v11);
              *(_WORD *)(*a2 + 2 * v13) = v12;
              if ( v14 < 0 || v14 > *(_DWORD *)(*a2 - 12) )
                ATL::AtlThrowImpl(-2147024809);
              *(_DWORD *)(*a2 - 16) = v14;
              ++v8;
              *(_WORD *)(*a2 + 2LL * v14) = 0;
            }
            while ( *v8 );
          }
        }
      }
    }
  }
  v8 = (unsigned __int16 *)pv;
LABEL_18:
  if ( v8 )
  {
    CoTaskMemFree(v8);
    pv = 0LL;
  }
  if ( v6 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioEndpointId::ToMigratedString", 0xFAu, v6);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  if ( v22 )
    ((void (__fastcall *)(struct IUnknown *))v22->lpVtbl->Release)(v22);
  if ( v17 )
    ((void (__fastcall *)(struct IUnknown *))v17->lpVtbl->Release)(v17);
  return (unsigned int)v6;
}
