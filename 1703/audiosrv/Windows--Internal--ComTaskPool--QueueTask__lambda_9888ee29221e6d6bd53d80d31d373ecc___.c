/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_9888ee29221e6d6bd53d80d31d373ecc___ @ 0x18004D44C
 * Callers:
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180057B78 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18002DFEC (-InternalRelease@-$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9888ee29221e6d6bd53d80d31d373ecc_____lambda_9888ee29221e6d6bd53d80d31d373ecc___ @ 0x18004D3C4 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_9888ee29221e6.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?s_AddThreadAffineWrapper@ComTaskPool@Internal@Windows@@CAJPEAUIComPoolTask@23@PEAPEAU423@@Z @ 0x1800D8024 (-s_AddThreadAffineWrapper@ComTaskPool@Internal@Windows@@CAJPEAUIComPoolTask@23@PEAPEAU423@@Z.c)
 *     ?s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComPoolTask@23@@Z @ 0x1800D8428 (-s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComP.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_9888ee29221e6d6bd53d80d31d373ecc___(
        unsigned int a1,
        APTTYPE a2,
        unsigned int a3,
        __int64 a4)
{
  struct Windows::Internal::IComPoolTask **v6; // rax
  struct Windows::Internal::IComPoolTask *v7; // rsi
  __int64 v8; // rcx
  HRESULT ApartmentType; // ebx
  HRESULT v10; // eax
  struct Windows::Internal::IComPoolTask *v12; // [rsp+20h] [rbp-20h] BYREF
  __int64 v13; // [rsp+28h] [rbp-18h] BYREF
  struct Windows::Internal::IComPoolTask *v14; // [rsp+30h] [rbp-10h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+60h] [rbp+20h] BYREF
  APTTYPE pAptType; // [rsp+68h] [rbp+28h] BYREF

  pAptType = a2;
  v6 = (struct Windows::Internal::IComPoolTask **)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9888ee29221e6d6bd53d80d31d373ecc_____lambda_9888ee29221e6d6bd53d80d31d373ecc___(
                                                    &v13,
                                                    a4);
  v7 = *v6;
  *v6 = 0LL;
  v8 = v13;
  v14 = v7;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  ApartmentType = v7 == 0LL ? 0x8007000E : 0;
  if ( v7 )
  {
    if ( a1 == 5 )
      a1 = 1;
    if ( a1 == 4 )
    {
      (*(void (__fastcall **)(struct Windows::Internal::IComPoolTask *))(*(_QWORD *)v7 + 24LL))(v7);
      goto LABEL_21;
    }
    v12 = 0LL;
    if ( a1 == 3 )
    {
      a1 = 0;
      goto LABEL_17;
    }
    if ( a1 == 2 )
    {
      ApartmentType = CoGetApartmentType(&pAptType, &pAptQualifier);
      if ( ApartmentType < 0 )
      {
LABEL_19:
        Microsoft::WRL::ComPtr<Windows::Internal::IComPoolTask>::InternalRelease((__int64 *)&v12);
        goto LABEL_21;
      }
      a1 = 0;
      if ( pAptType == APTTYPE_STA )
      {
LABEL_16:
        Microsoft::WRL::ComPtr<Windows::Internal::IComPoolTask>::InternalRelease((__int64 *)&v12);
        v10 = Windows::Internal::ComTaskPool::s_AddThreadAffineWrapper(v7, &v12);
        v7 = v12;
        ApartmentType = v10;
        goto LABEL_17;
      }
      if ( pAptType <= APTTYPE_STA )
      {
LABEL_15:
        ApartmentType = -2147418113;
        goto LABEL_19;
      }
      if ( pAptType > APTTYPE_NA )
      {
        if ( pAptType != APTTYPE_MAINSTA )
          goto LABEL_15;
        goto LABEL_16;
      }
    }
LABEL_17:
    if ( ApartmentType >= 0 )
      ApartmentType = Windows::Internal::ComTaskPool::s_QueuePoolTask(a1, 32LL, a3, v7);
    goto LABEL_19;
  }
LABEL_21:
  Microsoft::WRL::ComPtr<Windows::Internal::IComPoolTask>::InternalRelease((__int64 *)&v14);
  return (unsigned int)ApartmentType;
}
