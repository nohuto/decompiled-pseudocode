/*
 * XREFs of ?AddBuffer@CAppLayout@@UEAAJW4APP_LAYOUT_INSERT_LOCATION@@PEAUIAppLayoutItem@@PEAPEAU3@@Z @ 0x180312090
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800F60C4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800F60F4 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?_AddItemHelper@CAppLayout@@AEAAJPEAUIAppLayoutItem@@W4APP_LAYOUT_INSERT_LOCATION@@0@Z @ 0x180313E04 (-_AddItemHelper@CAppLayout@@AEAAJPEAUIAppLayoutItem@@W4APP_LAYOUT_INSERT_LOCATION@@0@Z.c)
 *     ?s_CreateInstance_Buffer@CAppLayoutItem@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x1803158C8 (-s_CreateInstance_Buffer@CAppLayoutItem@@SAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CAppLayout::AddBuffer(RTL_SRWLOCK *a1, unsigned int a2, __int64 a3, _QWORD *a4)
{
  int v8; // edi
  void *v9; // rax
  void *v11; // [rsp+40h] [rbp+8h] BYREF
  RTL_SRWLOCK *v12; // [rsp+58h] [rbp+20h] BYREF

  wil::srwlock::lock_exclusive(a1 + 2, &v12);
  if ( a4 )
    *a4 = 0LL;
  v11 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  v8 = CAppLayoutItem::s_CreateInstance_Buffer(&GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, &v11);
  if ( v8 >= 0 )
  {
    v8 = CAppLayout::_AddItemHelper(&a1[-5], v11, a2, a3);
    if ( v8 >= 0 )
    {
      if ( a4 )
      {
        v9 = v11;
        v11 = 0LL;
        *a4 = v9;
      }
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v12);
  return (unsigned int)v8;
}
