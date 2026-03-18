/*
 * XREFs of ?GetSurfaceUpdates@CCompositionFrame@@UEAA_NPEAUCSM_SURFACE_UPDATE@@IPEAI@Z @ 0x1C00116E0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C0011BB4 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0011C18 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?GetSurfaceUpdate@CCompositionSurface@@QEBAJ_KPEAUCSM_SURFACE_UPDATE@@@Z @ 0x1C0012518 (-GetSurfaceUpdate@CCompositionSurface@@QEBAJ_KPEAUCSM_SURFACE_UPDATE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CCompositionFrame::GetSurfaceUpdates(
        CCompositionFrame *this,
        struct CSM_SURFACE_UPDATE *a2,
        int a3,
        unsigned int *a4)
{
  unsigned int v4; // ebp
  char *v9; // rcx
  CCompositionFrame *v10; // rdx
  char result; // al
  CCompositionFrame *v12; // rdi
  CCompositionFrame *v13; // rcx
  char v14; // si
  unsigned __int64 v15; // r12
  _QWORD *v16; // rsi
  int SurfaceUpdate; // r12d
  _QWORD *v18; // rcx
  _DWORD *v19; // rdi
  unsigned int v20; // edi
  struct DXGGLOBAL *Global; // rax
  CCompositionFrame *v22; // rcx
  unsigned int v23; // ecx
  __int64 v24; // rax
  unsigned int v25; // edx
  bool v26; // cf
  int v27; // r12d
  struct CSM_SURFACE_UPDATE *v28; // rax
  int v29; // eax
  unsigned int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // [rsp+70h] [rbp+8h]
  unsigned __int64 v33; // [rsp+88h] [rbp+20h]

  v4 = 0;
  if ( *((_BYTE *)this + 138) )
    goto LABEL_6;
  v9 = (char *)*((_QWORD *)this + 15);
  if ( !v9 )
  {
    v10 = (CCompositionFrame *)*((_QWORD *)this + 18);
    if ( v10 != (CCompositionFrame *)((char *)this + 144) )
    {
      v9 = (char *)v10 - 8;
      *((_BYTE *)this + 136) = 1;
      *((_QWORD *)this + 15) = (char *)v10 - 8;
    }
  }
  result = *((_BYTE *)this + 136);
  if ( result )
  {
    while ( a3 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)v9 + 72LL))(v9) )
      {
        v15 = *((_QWORD *)this + 10);
        v16 = *(_QWORD **)(*((_QWORD *)this + 15) + 32LL);
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))v16[5])(v16 + 5) )
        {
          KeEnterCriticalRegion();
          ExAcquirePushLockSharedEx(v16 + 6, 0LL);
          if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))v16[5])(v16 + 5) )
          {
            SurfaceUpdate = CCompositionSurface::GetSurfaceUpdate((CCompositionSurface *)(v16 + 3), v15, a2);
            v18 = v16 + 6;
            if ( KeGetCurrentThread() == (struct _KTHREAD *)v16[7] )
            {
              v16[7] = 0LL;
              ExReleasePushLockExclusiveEx(v18, 0LL);
            }
            else
            {
              ExReleasePushLockSharedEx(v18, 0LL);
            }
            KeLeaveCriticalRegion();
            if ( SurfaceUpdate >= 0 )
            {
              v19 = (_DWORD *)*((_QWORD *)this + 15);
              if ( (*(unsigned int (__fastcall **)(_DWORD *))(*(_QWORD *)v19 + 64LL))(v19) == 1 )
              {
                v20 = v19[26];
                Global = DXGGLOBAL::GetGlobal();
                (*(void (__fastcall **)(_QWORD *, _QWORD))(*((_QWORD *)Global + 219) + 56LL))(v16, v20);
              }
              a2 = (struct CSM_SURFACE_UPDATE *)((char *)a2 + 200);
              --a3;
              ++v4;
            }
          }
          else
          {
            CPushLock::ReleaseLock((CPushLock *)(v16 + 5));
          }
        }
      }
      v22 = *(CCompositionFrame **)(*((_QWORD *)this + 15) + 8LL);
      if ( v22 == (CCompositionFrame *)((char *)this + 144) )
      {
        v9 = 0LL;
        *((_BYTE *)this + 136) = 0;
        result = 0;
      }
      else
      {
        result = *((_BYTE *)this + 136);
        v9 = (char *)v22 - 8;
      }
      *((_QWORD *)this + 15) = v9;
      if ( !result )
        goto LABEL_6;
    }
  }
  else
  {
LABEL_6:
    v12 = (CCompositionFrame *)*((_QWORD *)this + 16);
    *((_BYTE *)this + 138) = 1;
    if ( !v12 )
    {
      v13 = (CCompositionFrame *)*((_QWORD *)this + 20);
      if ( v13 != (CCompositionFrame *)((char *)this + 160) )
      {
        *((_QWORD *)this + 16) = v13;
        v12 = v13;
        *((_BYTE *)this + 137) = 1;
      }
    }
    v14 = *((_BYTE *)this + 137);
    if ( v14 )
    {
      while ( a3 )
      {
        v23 = *((_DWORD *)v12 + 20);
        v24 = 0LL;
        v25 = *((_DWORD *)v12 + 16);
        v26 = v23 < v25;
        if ( v23 == v25 )
        {
          v23 = 0;
          *((_DWORD *)v12 + 20) = 0;
          v26 = v25 != 0;
        }
        if ( v26 )
          v24 = *((_QWORD *)v12 + 7) + 32LL * v23;
        if ( v24 )
        {
          while ( a3 )
          {
            v32 = *(_QWORD *)(v24 + 8);
            v33 = *((_QWORD *)this + 10);
            v27 = CPushLock::AcquireLockShared((CPushLock *)(v32 + 40));
            if ( v27 >= 0 )
            {
              v27 = CCompositionSurface::GetSurfaceUpdate((CCompositionSurface *)(v32 + 24), v33, a2);
              CPushLock::ReleaseLock((CPushLock *)(v32 + 40));
            }
            v28 = (struct CSM_SURFACE_UPDATE *)((char *)a2 + 200);
            if ( v27 < 0 )
              v28 = a2;
            a2 = v28;
            v29 = a3 - 1;
            if ( v27 < 0 )
              v29 = a3;
            a3 = v29;
            v30 = v4 + 1;
            if ( v27 < 0 )
              v30 = v4;
            v31 = (unsigned int)++*((_DWORD *)v12 + 20);
            v4 = v30;
            v24 = 0LL;
            if ( (unsigned int)v31 < *((_DWORD *)v12 + 16) )
              v24 = *((_QWORD *)v12 + 7) + 32 * v31;
            if ( !v24 )
              goto LABEL_45;
          }
          break;
        }
LABEL_45:
        v12 = (CCompositionFrame *)**((_QWORD **)this + 16);
        if ( v12 == (CCompositionFrame *)((char *)this + 160) )
        {
          v12 = 0LL;
          *((_BYTE *)this + 137) = 0;
          v14 = 0;
        }
        else
        {
          v14 = *((_BYTE *)this + 137);
        }
        *((_QWORD *)this + 16) = v12;
        if ( !v14 )
          goto LABEL_10;
      }
    }
    else
    {
LABEL_10:
      *((_BYTE *)this + 138) = 0;
    }
    result = v14;
  }
  *a4 = v4;
  return result;
}
