/*
 * XREFs of ?ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z @ 0x1801A82E4
 * Callers:
 *     CHolographicInteropTaskQueue::ProcessPendingMessages__lambda_eb9d63b7245e84e3ffbf14e01a0783af___ @ 0x1801A7320 (CHolographicInteropTaskQueue--ProcessPendingMessages__lambda_eb9d63b7245e84e3ffbf14e01a0783af___.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ProcessRemoveExclusiveView@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1801A85B8 (-ProcessRemoveExclusiveView@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
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
  unsigned int v7; // edx
  unsigned int v8; // edx
  unsigned int v9; // edx
  unsigned int v10; // edx
  unsigned int v11; // edx
  unsigned int v12; // edx
  unsigned int v13; // edx
  char *v14; // rcx
  unsigned int v15; // edx
  unsigned int v16; // r8d
  unsigned int v17; // eax
  _OWORD *v18; // rax
  int v19; // eax
  unsigned int v20; // edx
  unsigned int v21; // edx
  unsigned int v22; // edx
  unsigned int v23; // edx
  unsigned int v24; // edx
  unsigned int v25; // edx
  unsigned int v26; // edx
  __int128 v27; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int128 v28; // [rsp+40h] [rbp-18h]
  unsigned int v29; // [rsp+68h] [rbp+10h]

  if ( a2 > 9 )
  {
    v20 = a2 - 10;
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
            v24 = v23 - 1;
            if ( v24 )
            {
              v25 = v24 - 1;
              if ( v25 )
              {
                v26 = v25 - 1;
                if ( v26 )
                {
                  if ( v26 == 1 && a4 )
                    SetEvent(a4);
                }
                else
                {
                  *((_DWORD *)this + 35) = (_DWORD)a4;
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
          else if ( a3[10].lpVtbl )
          {
            BYTE2(a3[9].lpVtbl) = 1;
          }
        }
      }
    }
    else
    {
      CHolographicClient::ProcessRemoveExclusiveView(this, a3);
    }
  }
  else if ( a2 == 9 )
  {
    CHolographicClient::ProcessAddExclusiveView(this, a3);
  }
  else
  {
    v7 = a2 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 1;
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
                    CHolographicClient::ProcessUpdateDisplay(this, a3);
                }
                else
                {
                  CHolographicClient::ProcessRemoveDisplay(this, a3);
                }
              }
              else
              {
                CHolographicClient::ProcessAddDisplay(this, a3);
              }
            }
            else
            {
              v14 = (char *)this + 176;
              v15 = v29;
              *((_QWORD *)&v27 + 1) = a5;
              v16 = *((_DWORD *)v14 + 6);
              v28 = __PAIR128__((unsigned __int64)a7, (unsigned __int64)a6);
              LODWORD(v27) = (_DWORD)a4;
              v17 = v16 + 1;
              if ( v16 + 1 >= v16 )
                v15 = v16 + 1;
              if ( v17 < v16 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v17 < v16 ? 0x80070216 : 0, 0xB5u);
              }
              else if ( v15 > *((_DWORD *)v14 + 5) )
              {
                v19 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v14, 0x20u, 1, &v27);
                if ( v19 < 0 )
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0xC0u);
              }
              else
              {
                v18 = (_OWORD *)(*(_QWORD *)v14 + 32LL * v16);
                *v18 = v27;
                v18[1] = v28;
                *((_DWORD *)v14 + 6) = v15;
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
