/*
 * XREFs of ?_CreateTempAppVisuals@CDragVisual@@AEAAJPEAPEAUITemporaryAppVisualArray@@@Z @ 0x1802F2880
 * Callers:
 *     ?GetSimpleTempAppVisualArray@CDragVisual@@UEAAJPEAPEAUITemporaryAppVisualArray@@@Z @ 0x1802F0DA0 (-GetSimpleTempAppVisualArray@CDragVisual@@UEAAJPEAPEAUITemporaryAppVisualArray@@@Z.c)
 *     ?PrepareForExitAnimation@CDragVisual@@UEAAJPEAPEAUITemporaryAppVisualArray@@@Z @ 0x1802F1580 (-PrepareForExitAnimation@CDragVisual@@UEAAJPEAPEAUITemporaryAppVisualArray@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?GetSingleViewFromLayout@AppLayoutHelpers@@YAJPEAUIAppLayout@@PEAPEAUIApplicationView@@@Z @ 0x1802F0EDC (-GetSingleViewFromLayout@AppLayoutHelpers@@YAJPEAUIAppLayout@@PEAPEAUIApplicationView@@@Z.c)
 *     ?MapRelativeRect@@YA?AUCRect@Geometry@@AEBU12@00@Z @ 0x1802F131C (-MapRelativeRect@@YA-AUCRect@Geometry@@AEBU12@00@Z.c)
 *     ?CreateInstance@CTempAppVisualArray@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x1802F5038 (-CreateInstance@CTempAppVisualArray@@SAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CSimpleTempAppVisual_CreateAndAddToArray@@YAJPEAUITemporaryAppVisual@@PEAUITemporaryAppVisualArray@@@Z @ 0x1802F793C (-CSimpleTempAppVisual_CreateAndAddToArray@@YAJPEAUITemporaryAppVisual@@PEAUITemporaryAppVisualAr.c)
 *     ?CSimpleTempAppVisual_CreateInstance@@YAJAEBUtagRECT@@0AEBW4TEMPORARY_APP_VISUAL_TYPE@@AEBQEAUHWND__@@2PEAUIApplicationView@@PEAPEAUITemporaryAppVisual@@@Z @ 0x1802F79D8 (-CSimpleTempAppVisual_CreateInstance@@YAJAEBUtagRECT@@0AEBW4TEMPORARY_APP_VISUAL_TYPE@@AEBQEAUHW.c)
 */

__int64 __fastcall CDragVisual::_CreateTempAppVisuals(CDragVisual *this, struct ITemporaryAppVisualArray **a2)
{
  const struct _GUID *v4; // rcx
  int Instance; // ebx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // eax
  HWND v11; // rcx
  int v12; // ebx
  struct IApplicationView **v13; // r8
  struct IApplicationView *v14; // rbx
  const struct tagRECT *v15; // rax
  int v17; // [rsp+40h] [rbp-19h] BYREF
  struct ITemporaryAppVisualArray *v18; // [rsp+48h] [rbp-11h] BYREF
  struct ITemporaryAppVisual *v19; // [rsp+50h] [rbp-9h] BYREF
  struct IApplicationView *v20; // [rsp+58h] [rbp-1h] BYREF
  __int64 v21; // [rsp+60h] [rbp+7h] BYREF
  int v22[4]; // [rsp+68h] [rbp+Fh] BYREF
  struct tagPOINT Points[2]; // [rsp+78h] [rbp+1Fh] BYREF

  *a2 = 0LL;
  v18 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
  Instance = CTempAppVisualArray::CreateInstance(v4, (void **)&v18);
  if ( Instance < 0 )
    goto LABEL_23;
  v6 = *((_DWORD *)this + 37);
  if ( !v6 )
  {
LABEL_10:
    v17 = 2;
    goto LABEL_11;
  }
  v7 = v6 - 2;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        if ( v9 != 2 )
        {
LABEL_12:
          Instance = -2147467259;
          goto LABEL_23;
        }
        v17 = 8;
      }
      else
      {
        v17 = 6;
      }
      goto LABEL_11;
    }
    goto LABEL_10;
  }
  v17 = 4;
LABEL_11:
  if ( !*((_QWORD *)this + 13) )
    goto LABEL_12;
  v21 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
  v10 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 13))(
          *((_QWORD *)this + 13),
          &GUID_158961e1_3ff3_405f_a4f9_b7777b784533,
          &v21);
  v11 = (HWND)*((_QWORD *)this + 19);
  v12 = v10;
  *(_OWORD *)&Points[0].x = *((_OWORD *)this + 15);
  MapWindowPoints(v11, 0LL, Points, 2u);
  if ( v12 < 0 )
  {
    v20 = 0LL;
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v20);
    Instance = AppLayoutHelpers::GetSingleViewFromLayout(
                 *((AppLayoutHelpers **)this + 11),
                 (struct IAppLayout *)&v20,
                 v13);
    if ( Instance >= 0 )
    {
      v19 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
      v14 = v20;
      v15 = (const struct tagRECT *)MapRelativeRect(v22, (int *)this + 56, (_OWORD *)this + 14, (int *)Points);
      Instance = CSimpleTempAppVisual_CreateInstance(
                   v15,
                   (const struct tagRECT *)Points,
                   (const enum TEMPORARY_APP_VISUAL_TYPE *)&v17,
                   (HWND *)this + 20,
                   (HWND *)this + 19,
                   v14,
                   &v19);
      if ( Instance >= 0 )
        Instance = (*(__int64 (__fastcall **)(struct ITemporaryAppVisualArray *, struct ITemporaryAppVisual *))(*(_QWORD *)v18 + 40LL))(
                     v18,
                     v19);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
    }
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v20);
  }
  else
  {
    Instance = (*(__int64 (__fastcall **)(__int64, int *, char *, struct tagPOINT *, struct ITemporaryAppVisualArray *))(*(_QWORD *)v21 + 24LL))(
                 v21,
                 &v17,
                 (char *)this + 152,
                 Points,
                 v18);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
  if ( Instance >= 0 )
  {
    Instance = CSimpleTempAppVisual_CreateAndAddToArray(
                 (struct ITemporaryAppVisual *)(((unsigned __int64)this + 32) & -(__int64)(this != 0LL)),
                 v18);
    if ( Instance >= 0 )
    {
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v18);
      Instance = 0;
      *a2 = v18;
    }
  }
LABEL_23:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
  return (unsigned int)Instance;
}
