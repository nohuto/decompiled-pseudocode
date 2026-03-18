/*
 * XREFs of ?Initialize@CFlipExBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@_N@Z @ 0x1C0013B3C
 * Callers:
 *     ?Create@CFlipExBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@_NPEAPEAV1@@Z @ 0x1C000A234 (-Create@CFlipExBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@_NPEAPEAV1@@.c)
 * Callees:
 *     ?Create@CBufferRealization@@SAJAEBUCSM_REALIZATION_INFO@@_NPEAPEAV1@@Z @ 0x1C000A300 (-Create@CBufferRealization@@SAJAEBUCSM_REALIZATION_INFO@@_NPEAPEAV1@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     DxgkGetSharedSyncObjectType @ 0x1C00DF260 (DxgkGetSharedSyncObjectType.c)
 */

__int64 __fastcall CFlipExBuffer::Initialize(
        CFlipExBuffer *this,
        const struct CSM_BUFFER_ATTRIBUTES *a2,
        const struct CSM_SWAPCHAIN_BUFFER_INFO *a3,
        bool a4)
{
  struct DXGGLOBAL *Global; // rax
  int v9; // edi
  void *v10; // rcx
  void *v11; // r14
  __int64 v12; // r14
  __int64 v13; // xmm1_8
  void (__fastcall ***v14)(PVOID, __int64); // r15
  PVOID v16; // rax
  struct _OBJECT_TYPE *SharedSyncObjectType; // rax
  PVOID v18; // rax
  struct DXGGLOBAL *v19; // rax
  struct DXGGLOBAL *v20; // rax
  _QWORD v21[4]; // [rsp+30h] [rbp-20h] BYREF
  PVOID Object; // [rsp+80h] [rbp+30h] BYREF

  Global = DXGGLOBAL::GetGlobal();
  v9 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)Global + 219) + 8LL))((char *)this + 248);
  if ( v9 >= 0 )
  {
    *((_DWORD *)this + 143) = (unsigned int)PsGetCurrentProcessId();
    *((_OWORD *)this + 3) = *(_OWORD *)a2;
    *((_OWORD *)this + 4) = *((_OWORD *)a2 + 1);
    *((_OWORD *)this + 5) = *((_OWORD *)a2 + 2);
    *((_OWORD *)this + 6) = *((_OWORD *)a2 + 3);
    *((_OWORD *)this + 7) = *((_OWORD *)a2 + 4);
    *((_OWORD *)this + 8) = *((_OWORD *)a2 + 5);
    *((_OWORD *)this + 9) = *((_OWORD *)a2 + 6);
    *((_QWORD *)this + 20) = *((_QWORD *)a2 + 14);
    if ( (*((_BYTE *)a2 + 116) & 0x50) == 0x50
      && ((v19 = DXGGLOBAL::GetGlobal(), (*(unsigned int (**)(void))(*((_QWORD *)v19 + 219) + 88LL))())
       || (v20 = DXGGLOBAL::GetGlobal(), (*(unsigned int (**)(void))(*((_QWORD *)v20 + 219) + 160LL))())
       || (*((_DWORD *)a2 + 29) & 0x80u) != 0) )
    {
      *((_DWORD *)this + 41) |= 0x40u;
    }
    else
    {
      *((_DWORD *)this + 41) &= ~0x40u;
    }
    v10 = (void *)*((_QWORD *)a3 + 1);
    if ( v10 )
    {
      if ( a4 )
      {
        ObfReferenceObject(v10);
        v16 = (PVOID)*((_QWORD *)a3 + 1);
      }
      else
      {
        v9 = ObReferenceObjectByHandle(v10, 2u, (POBJECT_TYPE)ExSemaphoreObjectType, 1, &Object, 0LL);
        v16 = Object;
      }
      *((_QWORD *)this + 37) = v16;
    }
    if ( v9 >= 0 )
    {
      v11 = (void *)*((_QWORD *)a3 + 2);
      if ( v11 )
      {
        if ( a4 )
        {
          ObfReferenceObject(*((PVOID *)a3 + 2));
          v18 = (PVOID)*((_QWORD *)a3 + 2);
        }
        else
        {
          SharedSyncObjectType = (struct _OBJECT_TYPE *)DxgkGetSharedSyncObjectType();
          v9 = ObReferenceObjectByHandle(v11, 0x1F0000u, SharedSyncObjectType, 1, &Object, 0LL);
          v18 = Object;
        }
        *((_QWORD *)this + 39) = v18;
      }
      if ( v9 >= 0 )
      {
        memset(v21, 0, sizeof(v21));
        v12 = 0LL;
        LODWORD(v21[0]) = *((_DWORD *)a3 + 6);
        do
        {
          if ( (unsigned int)v12 >= *((_DWORD *)a3 + 7) )
            break;
          HIDWORD(v21[0]) = v12;
          v13 = *((_QWORD *)a3 + 3 * v12 + 6);
          *(_OWORD *)&v21[1] = *(_OWORD *)((char *)a3 + 24 * v12 + 32);
          v21[3] = v13;
          v9 = CBufferRealization::Create(
                 (const struct CSM_REALIZATION_INFO *)v21,
                 a4,
                 (struct CBufferRealization **)&Object);
          if ( v9 >= 0 )
          {
            v14 = (void (__fastcall ***)(PVOID, __int64))Object;
            v9 = (*(__int64 (__fastcall **)(CFlipExBuffer *, PVOID))(*(_QWORD *)this + 192LL))(this, Object);
            if ( v9 < 0 )
            {
              if ( v14 )
                (**v14)(v14, 1LL);
            }
            else
            {
              (*((void (__fastcall **)(void (__fastcall **)(PVOID, __int64)))*v14[8] + 4))(v14[8]);
            }
          }
          v12 = (unsigned int)(v12 + 1);
        }
        while ( v9 >= 0 );
        if ( v9 >= 0 )
        {
          *((_QWORD *)this + 36) = *(_QWORD *)a3;
          *((_BYTE *)this + 568) = *((_DWORD *)a3 + 6) == 4;
        }
      }
    }
  }
  return (unsigned int)v9;
}
