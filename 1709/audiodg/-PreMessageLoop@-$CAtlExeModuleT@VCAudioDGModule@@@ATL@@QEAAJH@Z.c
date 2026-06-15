/*
 * XREFs of ?PreMessageLoop@?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAJH@Z @ 0x14001BC94
 * Callers:
 *     ?PreMessageLoop@CAudioDGModule@@QEAAJH@Z @ 0x140012D50 (-PreMessageLoop@CAudioDGModule@@QEAAJH@Z.c)
 * Callees:
 *     ?RegisterClassObject@_ATL_OBJMAP_ENTRY30@ATL@@QEAAJKK@Z @ 0x14001B194 (-RegisterClassObject@_ATL_OBJMAP_ENTRY30@ATL@@QEAAJKK@Z.c)
 *     ?Close@CHandle@ATL@@QEAAXXZ @ 0x140034F38 (-Close@CHandle@ATL@@QEAAXXZ.c)
 */

__int64 __fastcall ATL::CAtlExeModuleT<CAudioDGModule>::PreMessageLoop(__int64 a1)
{
  ATL::_ATL_OBJMAP_ENTRY30 **v1; // rdi
  unsigned __int64 v3; // rax
  HRESULT v4; // ebx
  __int64 *v6; // rdi
  HRESULT v7; // eax
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v1 = (ATL::_ATL_OBJMAP_ENTRY30 **)qword_14008A020;
  v3 = qword_14008A028;
  v4 = 1;
  while ( (unsigned __int64)v1 < v3 )
  {
    if ( v4 < 0 )
      return (unsigned int)v4;
    if ( *v1 )
    {
      v4 = (unsigned int)ATL::_ATL_OBJMAP_ENTRY30::RegisterClassObject(*v1);
      v3 = qword_14008A028;
    }
    ++v1;
  }
  if ( v4 >= 0 )
  {
    if ( v4 )
    {
      *(_BYTE *)(a1 + 96) = 0;
    }
    else
    {
      if ( *(_BYTE *)(a1 + 96) )
      {
        v10 = -1LL;
        v4 = CoResumeClassObjects();
        if ( v4 < 0 )
        {
          SetEvent(*(HANDLE *)(a1 + 80));
          WaitForSingleObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, 2 * *(_DWORD *)(a1 + 88));
        }
        ATL::CHandle::Close((ATL::CHandle *)&v10);
      }
      else
      {
        v4 = CoResumeClassObjects();
      }
      if ( v4 < 0 )
      {
        v6 = (__int64 *)qword_14008A020;
        v7 = 0;
        v8 = qword_14008A028;
        while ( (unsigned __int64)v6 < v8 && !v7 )
        {
          v9 = *v6;
          if ( *v6 && *(_DWORD *)(v9 + 40) )
          {
            v7 = CoRevokeClassObject(*(_DWORD *)(v9 + 40));
            v8 = qword_14008A028;
          }
          ++v6;
        }
      }
    }
  }
  return (unsigned int)v4;
}
