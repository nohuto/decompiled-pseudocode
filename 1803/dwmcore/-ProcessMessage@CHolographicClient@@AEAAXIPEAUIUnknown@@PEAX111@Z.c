/*
 * XREFs of ?ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z @ 0x1801FF9B0
 * Callers:
 *     CHolographicInteropTaskQueue::ProcessPendingMessages__lambda_e17157816af85a08dfd01dfd4111dd83___ @ 0x1801FEB74 (CHolographicInteropTaskQueue--ProcessPendingMessages__lambda_e17157816af85a08dfd01dfd4111dd83___.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180079700 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801430F8 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?ProcessAddComposition@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1801FF530 (-ProcessAddComposition@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessAddDisplay@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1801FF594 (-ProcessAddDisplay@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessAddExclusivePresentData@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1801FF688 (-ProcessAddExclusivePresentData@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessAddExclusiveView@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1801FF6E0 (-ProcessAddExclusiveView@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessAddTexture@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1801FF780 (-ProcessAddTexture@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessAddViewer@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1801FF84C (-ProcessAddViewer@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessCreateTexture@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1801FF95C (-ProcessCreateTexture@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessReleaseExclusiveSwapChain@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1801FFD34 (-ProcessReleaseExclusiveSwapChain@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessRemoveComposition@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1801FFD9C (-ProcessRemoveComposition@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessRemoveDisplay@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1801FFE6C (-ProcessRemoveDisplay@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessRemoveExclusiveView@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1801FFEF0 (-ProcessRemoveExclusiveView@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessRemoveTexture@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1801FFF5C (-ProcessRemoveTexture@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessRemoveViewer@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1801FFFD4 (-ProcessRemoveViewer@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessResizeTexture@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x180200060 (-ProcessResizeTexture@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessSetActiveExclusiveView@CHolographicClient@@AEAAXI@Z @ 0x1802000BC (-ProcessSetActiveExclusiveView@CHolographicClient@@AEAAXI@Z.c)
 *     ?ProcessUpdateComposition@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x180200134 (-ProcessUpdateComposition@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessUpdateDisplay@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x180200198 (-ProcessUpdateDisplay@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessUpdateViewer@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1802001F0 (-ProcessUpdateViewer@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
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
  unsigned int v13; // edx
  char *v14; // rcx
  __int64 v15; // rax
  unsigned int v16; // edx
  _OWORD *v17; // rax
  int v18; // eax
  unsigned int v19; // edx
  unsigned int v20; // edx
  unsigned int v21; // edx
  unsigned int v22; // edx
  unsigned int v23; // edx
  RTL_SRWLOCK *v24; // rbx
  struct IUnknownVtbl *lpVtbl; // rcx
  unsigned int v26; // edx
  unsigned int v27; // edx
  unsigned int v28; // edx
  unsigned int v29; // edx
  __int64 v30; // rdx
  struct IUnknown *v31; // rax
  unsigned int v32; // edx
  unsigned int v33; // edx
  unsigned int v34; // edx
  __int64 v35; // rdx
  struct IUnknown *v36; // [rsp+30h] [rbp-38h] BYREF
  __int128 v37; // [rsp+38h] [rbp-30h] BYREF
  unsigned __int128 v38; // [rsp+48h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( a2 > 0xE )
  {
    if ( a2 > 0x16 )
    {
      v32 = a2 - 23;
      if ( v32 )
      {
        v33 = v32 - 1;
        if ( v33 )
        {
          v34 = v33 - 1;
          if ( v34 )
          {
            v35 = v34 - 1;
            if ( (_DWORD)v35 )
            {
              if ( (_DWORD)v35 != 1 )
                goto LABEL_63;
              LOBYTE(v35) = (_BYTE)a4;
              (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 3) + 192LL))(*((_QWORD *)this + 3), v35);
            }
            else
            {
              CHolographicClient::ProcessRemoveViewer(this, a3);
            }
          }
          else
          {
            CHolographicClient::ProcessUpdateViewer(this, a3);
          }
        }
        else
        {
          CHolographicClient::ProcessAddViewer(this, a3);
        }
      }
      else
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 3) + 120LL))(
          *((_QWORD *)this + 3),
          (unsigned int)a4);
      }
    }
    else if ( a2 == 22 )
    {
      CHolographicClient::ProcessAddExclusivePresentData(this, a3);
    }
    else
    {
      v26 = a2 - 15;
      if ( v26 )
      {
        v27 = v26 - 1;
        if ( v27 )
        {
          v28 = v27 - 1;
          if ( v28 )
          {
            v29 = v28 - 1;
            if ( v29 )
            {
              v30 = v29 - 2;
              if ( (_DWORD)v30 )
              {
                if ( (_DWORD)v30 != 1 )
                  goto LABEL_63;
                Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 24);
                *((_DWORD *)this + 56) = 0;
                DynArrayImpl<0>::ShrinkToSize((__int64)this + 200, 0x20u);
              }
              else
              {
                v31 = (struct IUnknown *)*((_QWORD *)this + 24);
                if ( v31 != a3 )
                {
                  if ( a3 )
                  {
                    ((void (__fastcall *)(struct IUnknown *, __int64, struct IUnknown *, void *))a3->lpVtbl->AddRef)(
                      a3,
                      v30,
                      a3,
                      a4);
                    v31 = (struct IUnknown *)*((_QWORD *)this + 24);
                  }
                  v36 = v31;
                  *((_QWORD *)this + 24) = a3;
                  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v36);
                }
              }
            }
            else if ( a4 )
            {
              SetEvent(a4);
            }
          }
          else
          {
            *((_DWORD *)this + 43) = (_DWORD)a4;
          }
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
  }
  else if ( a2 == 14 )
  {
    v24 = (RTL_SRWLOCK *)&a3[50];
    AcquireSRWLockExclusive((PSRWLOCK)&a3[50]);
    lpVtbl = a3[10].lpVtbl;
    if ( lpVtbl )
    {
      a3[11].lpVtbl = lpVtbl;
      (*((void (__fastcall **)(struct IUnknownVtbl *))lpVtbl->QueryInterface + 1))(lpVtbl);
      BYTE2(a3[9].lpVtbl) = 1;
    }
    ReleaseSRWLockExclusive(v24);
  }
  else if ( a2 > 7 )
  {
    v19 = a2 - 8;
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
            v23 = v22 - 1;
            if ( v23 )
            {
              if ( v23 != 1 )
                goto LABEL_63;
              CHolographicClient::ProcessRemoveExclusiveView(this, a3);
            }
            else
            {
              CHolographicClient::ProcessAddExclusiveView(this, a3);
            }
          }
          else
          {
            CHolographicClient::ProcessUpdateComposition(this, a3);
          }
        }
        else
        {
          CHolographicClient::ProcessRemoveComposition(this, a3);
        }
      }
      else
      {
        CHolographicClient::ProcessAddComposition(this, a3);
      }
    }
    else
    {
      CHolographicClient::ProcessUpdateDisplay(this, a3);
    }
  }
  else if ( a2 == 7 )
  {
    CHolographicClient::ProcessRemoveDisplay(this, a3);
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
            v13 = v12 - 1;
            if ( v13 )
            {
              if ( v13 == 1 )
              {
                CHolographicClient::ProcessAddDisplay(this, a3);
                return;
              }
LABEL_63:
              wil::details::in1diag3::_FailFast_Unexpected(
                retaddr,
                (void *)0x196,
                (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\holographic\\holographicclient.cpp",
                (const char *)a4);
              __debugbreak();
            }
            v14 = (char *)this + 200;
            *((_QWORD *)&v37 + 1) = a5;
            v38 = __PAIR128__((unsigned __int64)a7, (unsigned __int64)a6);
            LODWORD(v37) = (_DWORD)a4;
            v15 = *((unsigned int *)v14 + 6);
            v16 = v15 + 1;
            if ( (int)v15 + 1 < (unsigned int)v15 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(
                0x14u,
                0LL,
                0,
                (int)v15 + 1 < (unsigned int)v15 ? 0x80070216 : 0,
                0xB5u);
            }
            else if ( v16 > *((_DWORD *)v14 + 5) )
            {
              v18 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v14, 0x20u, 1, &v37);
              if ( v18 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0xC0u);
            }
            else
            {
              v17 = (_OWORD *)(*(_QWORD *)v14 + 32 * v15);
              *v17 = v37;
              v17[1] = v38;
              *((_DWORD *)v14 + 6) = v16;
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
