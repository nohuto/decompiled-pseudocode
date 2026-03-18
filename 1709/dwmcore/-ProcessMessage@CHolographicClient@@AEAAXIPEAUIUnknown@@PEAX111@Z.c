/*
 * XREFs of ?ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z @ 0x1801C3278
 * Callers:
 *     CHolographicInteropTaskQueue::ProcessPendingMessages__lambda_e17157816af85a08dfd01dfd4111dd83___ @ 0x1801C2530 (CHolographicInteropTaskQueue--ProcessPendingMessages__lambda_e17157816af85a08dfd01dfd4111dd83___.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180068870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?ProcessAddDisplay@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1801C2F60 (-ProcessAddDisplay@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessAddExclusivePresentData@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1801C3058 (-ProcessAddExclusivePresentData@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessAddExclusiveView@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1801C30B0 (-ProcessAddExclusiveView@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessAddTexture@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1801C3154 (-ProcessAddTexture@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessCreateTexture@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1801C3224 (-ProcessCreateTexture@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessReleaseExclusiveSwapChain@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1801C35B8 (-ProcessReleaseExclusiveSwapChain@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessRemoveDisplay@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1801C3620 (-ProcessRemoveDisplay@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessRemoveExclusiveView@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1801C36A4 (-ProcessRemoveExclusiveView@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessRemoveTexture@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1801C3710 (-ProcessRemoveTexture@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessResizeTexture@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1801C3788 (-ProcessResizeTexture@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessSetActiveExclusiveView@CHolographicClient@@AEAAXI@Z @ 0x1801C37E4 (-ProcessSetActiveExclusiveView@CHolographicClient@@AEAAXI@Z.c)
 *     ?ProcessUpdateDisplay@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1801C385C (-ProcessUpdateDisplay@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?UninitializeResources@CHolographicClient@@AEAAXXZ @ 0x1801C3974 (-UninitializeResources@CHolographicClient@@AEAAXXZ.c)
 */

void __fastcall CHolographicClient::ProcessMessage(
        CHolographicClient *this,
        unsigned int a2,
        struct IUnknown *a3,
        void *a4,
        void *a5,
        void *a6,
        void *a7)
{
  unsigned int v9; // edx
  unsigned int v10; // edx
  unsigned int v11; // edx
  unsigned int v12; // edx
  char *v13; // rcx
  unsigned int v14; // edx
  unsigned int v15; // r8d
  unsigned int v16; // eax
  _OWORD *v17; // rax
  signed int v18; // eax
  unsigned int v19; // edx
  unsigned int v20; // edx
  unsigned int v21; // edx
  unsigned int v22; // edx
  __int64 v23; // rcx
  __int64 v24; // rcx
  unsigned int v25; // edx
  unsigned int v26; // edx
  unsigned int v27; // edx
  unsigned int v28; // edx
  RTL_SRWLOCK *v29; // rbx
  struct IUnknownVtbl *lpVtbl; // rcx
  __int64 v31; // rdx
  int v32; // edx
  int v33; // edx
  __int64 v34; // [rsp+30h] [rbp-30h] BYREF
  __int128 v35; // [rsp+38h] [rbp-28h] BYREF
  unsigned __int128 v36; // [rsp+48h] [rbp-18h]
  unsigned int v37; // [rsp+78h] [rbp+18h] BYREF

  if ( a2 > 0xC )
  {
    if ( a2 > 0x12 )
    {
      v31 = a2 - 20;
      if ( (_DWORD)v31 )
      {
        v32 = v31 - 1;
        if ( v32 )
        {
          v33 = v32 - 1;
          if ( v33 )
          {
            if ( v33 == 1 )
              (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 3) + 120LL))(
                *((_QWORD *)this + 3),
                (unsigned int)a4);
          }
          else
          {
            CHolographicClient::ProcessAddExclusivePresentData(this, a3);
          }
        }
        else
        {
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 20);
          *((_DWORD *)this + 48) = 0;
          DynArrayImpl<0>::ShrinkToSize((__int64)this + 168, 0x20u);
        }
      }
      else if ( *((struct IUnknown **)this + 20) != a3 )
      {
        if ( a3 )
          ((void (__fastcall *)(struct IUnknown *, __int64, struct IUnknown *, void *))a3->lpVtbl->AddRef)(
            a3,
            v31,
            a3,
            a4);
        v34 = *((_QWORD *)this + 20);
        *((_QWORD *)this + 20) = a3;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v34);
      }
    }
    else if ( a2 == 18 )
    {
      if ( a4 )
        SetEvent(a4);
    }
    else
    {
      v25 = a2 - 13;
      if ( v25 )
      {
        v26 = v25 - 1;
        if ( v26 )
        {
          v27 = v26 - 1;
          if ( v27 )
          {
            v28 = v27 - 1;
            if ( v28 )
            {
              if ( v28 == 1 )
                *((_DWORD *)this + 35) = (_DWORD)a4;
            }
            else
            {
              CHolographicClient::ProcessSetActiveExclusiveView(this, (unsigned int)a4);
            }
          }
          else
          {
            CHolographicClient::ProcessReleaseExclusiveSwapChain(this, a3);
          }
        }
        else
        {
          v29 = (RTL_SRWLOCK *)&a3[50];
          AcquireSRWLockExclusive((PSRWLOCK)&a3[50]);
          lpVtbl = a3[10].lpVtbl;
          if ( lpVtbl )
          {
            a3[11].lpVtbl = lpVtbl;
            (*((void (__fastcall **)(struct IUnknownVtbl *))lpVtbl->QueryInterface + 1))(lpVtbl);
            BYTE2(a3[9].lpVtbl) = 1;
          }
          ReleaseSRWLockExclusive(v29);
        }
      }
      else
      {
        CHolographicClient::ProcessRemoveExclusiveView(this, a3);
      }
    }
  }
  else if ( a2 == 12 )
  {
    CHolographicClient::ProcessAddExclusiveView(this, a3);
  }
  else if ( a2 > 6 )
  {
    v19 = a2 - 7;
    if ( v19 )
    {
      v20 = v19 - 1;
      if ( v20 )
      {
        v21 = v20 - 1;
        if ( v21 )
        {
          v22 = v21 - 1;
          if ( v22 )
          {
            if ( v22 == 1 )
            {
              v23 = *((_QWORD *)this + 3);
              v37 = (unsigned int)a6;
              (*(void (__fastcall **)(__int64, unsigned int *, struct IUnknown *, void *))(*(_QWORD *)v23 + 144LL))(
                v23,
                &v37,
                a3,
                a4);
            }
          }
          else
          {
            CHolographicClient::UninitializeResources(this);
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 136LL))(*((_QWORD *)this + 3));
          }
        }
        else
        {
          v24 = *((_QWORD *)this + 3);
          v37 = (unsigned int)a6;
          (*(void (__fastcall **)(__int64, unsigned int *, struct IUnknown *, void *))(*(_QWORD *)v24 + 128LL))(
            v24,
            &v37,
            a3,
            a4);
        }
      }
      else
      {
        CHolographicClient::ProcessUpdateDisplay(this, a3);
      }
    }
    else
    {
      CHolographicClient::ProcessRemoveDisplay(this, a3);
    }
  }
  else if ( a2 == 6 )
  {
    CHolographicClient::ProcessAddDisplay(this, a3);
  }
  else
  {
    v9 = a2 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( v12 )
          {
            if ( v12 == 1 )
            {
              v13 = (char *)this + 168;
              v14 = v37;
              *((_QWORD *)&v35 + 1) = a5;
              v15 = *((_DWORD *)v13 + 6);
              v36 = __PAIR128__((unsigned __int64)a7, (unsigned __int64)a6);
              LODWORD(v35) = (_DWORD)a4;
              v16 = v15 + 1;
              if ( v15 + 1 >= v15 )
                v14 = v15 + 1;
              if ( v16 < v15 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v16 < v15 ? 0x80070216 : 0, 0xB5u);
              }
              else if ( v14 > *((_DWORD *)v13 + 5) )
              {
                v18 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v13, 0x20u, 1, &v35);
                if ( v18 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v18, 0xC0u);
              }
              else
              {
                v17 = (_OWORD *)(*(_QWORD *)v13 + 32LL * v15);
                *v17 = v35;
                v17[1] = v36;
                *((_DWORD *)v13 + 6) = v14;
              }
            }
          }
          else
          {
            CHolographicClient::ProcessResizeTexture(this, a3);
          }
        }
        else
        {
          CHolographicClient::ProcessRemoveTexture(this, a3);
        }
      }
      else
      {
        CHolographicClient::ProcessAddTexture(this, a3);
      }
    }
    else
    {
      CHolographicClient::ProcessCreateTexture(this, a3);
    }
  }
}
