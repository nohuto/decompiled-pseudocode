/*
 * XREFs of ?Initialize@CFlipExBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@@Z @ 0x1C0039F14
 * Callers:
 *     ?Create@CFlipExBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@PEAPEAV1@@Z @ 0x1C0020BFC (-Create@CFlipExBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Create@CBufferRealization@@SAJAEBUCSM_REALIZATION_INFO@@PEAPEAV1@@Z @ 0x1C0020CC0 (-Create@CBufferRealization@@SAJAEBUCSM_REALIZATION_INFO@@PEAPEAV1@@Z.c)
 *     ?Create@CRegion@@SAJPEAPEAV1@@Z @ 0x1C00259F0 (-Create@CRegion@@SAJPEAPEAV1@@Z.c)
 *     ?SetFullRegion@CRegion@@QEAAXXZ @ 0x1C003A804 (-SetFullRegion@CRegion@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     UserIsCurrentProcessImmersive @ 0x1C00EC6F0 (UserIsCurrentProcessImmersive.c)
 */

__int64 __fastcall CFlipExBuffer::Initialize(
        struct CRegion **this,
        const struct CSM_BUFFER_ATTRIBUTES *a2,
        const struct CSM_SWAPCHAIN_BUFFER_INFO *a3)
{
  NTSTATUS v6; // edi
  void *v7; // rcx
  __int64 v8; // r14
  __int64 v9; // xmm1_8
  CRegion **v10; // r15
  struct _OBJECT_TYPE *v12; // rax
  _QWORD v13[4]; // [rsp+30h] [rbp-20h] BYREF
  PVOID Object; // [rsp+70h] [rbp+20h] BYREF

  v6 = CRegion::Create(this + 31);
  if ( v6 >= 0 )
  {
    *((_DWORD *)this + 126) = (unsigned int)PsGetCurrentProcessId();
    *((_OWORD *)this + 3) = *(_OWORD *)a2;
    *((_OWORD *)this + 4) = *((_OWORD *)a2 + 1);
    *((_OWORD *)this + 5) = *((_OWORD *)a2 + 2);
    *((_OWORD *)this + 6) = *((_OWORD *)a2 + 3);
    *((_OWORD *)this + 7) = *((_OWORD *)a2 + 4);
    *((_OWORD *)this + 8) = *((_OWORD *)a2 + 5);
    *((_OWORD *)this + 9) = *((_OWORD *)a2 + 6);
    this[20] = (struct CRegion *)*((_QWORD *)a2 + 14);
    if ( (*((_BYTE *)a2 + 116) & 0x50) == 0x50
      && ((unsigned int)GreDwmDesktopOverlaysEnabled()
       || (unsigned int)UserIsCurrentProcessImmersive()
       || (*((_DWORD *)a2 + 29) & 0x80u) != 0) )
    {
      *((_DWORD *)this + 41) |= 0x40u;
    }
    else
    {
      *((_DWORD *)this + 41) &= ~0x40u;
    }
    v7 = (void *)*((_QWORD *)a3 + 1);
    if ( v7 )
    {
      v6 = ObReferenceObjectByHandle(v7, 2u, (POBJECT_TYPE)ExSemaphoreObjectType, 1, &Object, 0LL);
      this[37] = (struct CRegion *)Object;
    }
    if ( v6 >= 0 )
    {
      if ( *((_QWORD *)a3 + 2) )
      {
        v12 = (struct _OBJECT_TYPE *)((__int64 (*)(void))qword_1C0190880)();
        v6 = ObReferenceObjectByHandle(*((HANDLE *)a3 + 2), 0x1F0000u, v12, 1, &Object, 0LL);
        this[39] = (struct CRegion *)Object;
      }
      if ( v6 >= 0 )
      {
        memset(v13, 0, sizeof(v13));
        v8 = 0LL;
        LODWORD(v13[0]) = *((_DWORD *)a3 + 6);
        do
        {
          if ( (unsigned int)v8 >= *((_DWORD *)a3 + 7) )
            break;
          HIDWORD(v13[0]) = v8;
          v9 = *((_QWORD *)a3 + 3 * v8 + 6);
          *(_OWORD *)&v13[1] = *(_OWORD *)((char *)a3 + 24 * v8 + 32);
          v13[3] = v9;
          v6 = CBufferRealization::Create(
                 (const struct CSM_REALIZATION_INFO *)v13,
                 (struct CBufferRealization **)&Object);
          if ( v6 >= 0 )
          {
            v10 = (CRegion **)Object;
            v6 = (*((__int64 (__fastcall **)(struct CRegion **, PVOID))*this + 24))(this, Object);
            if ( v6 < 0 )
            {
              if ( v10 )
                (*(void (__fastcall **)(CRegion **, __int64))*v10)(v10, 1LL);
            }
            else
            {
              CRegion::SetFullRegion(v10[8]);
            }
          }
          v8 = (unsigned int)(v8 + 1);
        }
        while ( v6 >= 0 );
        if ( v6 >= 0 )
        {
          this[36] = *(struct CRegion **)a3;
          *((_BYTE *)this + 500) = *((_DWORD *)a3 + 6) == 4;
        }
      }
    }
  }
  return (unsigned int)v6;
}
