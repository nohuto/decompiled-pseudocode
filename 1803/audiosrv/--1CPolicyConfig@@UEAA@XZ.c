/*
 * XREFs of ??1CPolicyConfig@@UEAA@XZ @ 0x1800B826C
 * Callers:
 *     ??_GCPolicyConfig@@UEAAPEAXI@Z @ 0x18009CCD8 (--_GCPolicyConfig@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000B360 (--3@YAXPEAX@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Release@CAudioSessionStore@@UEAAKXZ @ 0x180042580 (-Release@CAudioSessionStore@@UEAAKXZ.c)
 *     ?FreeNode@?$CAtlList@PEAVCAudioSessionStore@@V?$CElementTraits@PEAVCAudioSessionStore@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x180042B00 (-FreeNode@-$CAtlList@PEAVCAudioSessionStore@@V-$CElementTraits@PEAVCAudioSessionStore@@@ATL@@@AT.c)
 *     ?RemoveAll@?$CAtlList@PEAVCAudioSessionStore@@V?$CElementTraits@PEAVCAudioSessionStore@@@ATL@@@ATL@@QEAAXXZ @ 0x180042B20 (-RemoveAll@-$CAtlList@PEAVCAudioSessionStore@@V-$CElementTraits@PEAVCAudioSessionStore@@@ATL@@@A.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180060AB8 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18009BB24 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall CPolicyConfig::~CPolicyConfig(CPolicyConfig *this)
{
  CPolicyConfig *v1; // rdi
  _QWORD *v2; // rcx
  __int64 v3; // rsi
  __int64 *v4; // rcx
  __int64 *v5; // rdx
  CAudioSessionStore *v6; // r14
  __int64 v7; // rax
  int *v8; // rbx
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+20h] [rbp-58h]
  ATL::CAtlException *v10; // [rsp+30h] [rbp-48h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-40h] BYREF
  char v12; // [rsp+40h] [rbp-38h]
  CAudioSessionStore *v14; // [rsp+98h] [rbp+20h]

  v1 = this;
  *(_QWORD *)this = &CPolicyConfig::`vftable'{for `IPolicyConfig'};
  *((_QWORD *)this + 1) = &CPolicyConfig::`vftable'{for `CRefCountedObject'};
  v9 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  v12 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  while ( 1 )
  {
    v2 = (_QWORD *)*((_QWORD *)v1 + 3);
    if ( !v2 )
      break;
    *((_QWORD *)v1 + 3) = v2[3];
    operator delete(v2);
  }
  v3 = *((_QWORD *)v1 + 11);
  while ( 2 )
  {
    if ( v3 )
    {
      try
      {
        v4 = (__int64 *)((char *)v1 + 72);
        v5 = (__int64 *)*((_QWORD *)v1 + 9);
        if ( !v5 )
          ATL::AtlThrowImpl(-2147467259);
        v6 = (CAudioSessionStore *)v5[2];
        v7 = *v5;
        *v4 = *v5;
        if ( v7 )
          *(_QWORD *)(v7 + 8) = 0LL;
        else
          *((_QWORD *)v1 + 10) = 0LL;
        ATL::CAtlList<CAudioSessionStore *,ATL::CElementTraits<CAudioSessionStore *>>::FreeNode((__int64)v4, v5);
        v14 = v6;
      }
      catch ( ATL::CAtlException *v10 )
      {
        v8 = (int *)v10;
        if ( *(_DWORD *)v10 == -1073741571 )
          _o__resetstkoflw();
        v1 = this;
        if ( *v8 >= 0 )
        {
          v6 = v14;
          goto LABEL_15;
        }
LABEL_17:
        --v3;
        continue;
      }
LABEL_15:
      if ( v6 )
        CAudioSessionStore::Release(v6);
      goto LABEL_17;
    }
    break;
  }
  if ( v12 )
    LeaveCriticalSection(lpCriticalSection);
  `eh vector destructor iterator'(
    (char *)v1 + 664,
    72LL,
    7LL,
    (void (*)(void *))ATL::CAtlMap<unsigned long,ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>>::~CAtlMap<unsigned long,ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>>);
  `eh vector destructor iterator'(
    (char *)v1 + 160,
    72LL,
    7LL,
    (void (*)(void *))ATL::CAtlMap<unsigned long,ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>>::~CAtlMap<unsigned long,ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>>);
  DeleteCriticalSection((LPCRITICAL_SECTION)v1 + 3);
  ATL::CAtlList<CAudioSessionStore *,ATL::CElementTraits<CAudioSessionStore *>>::RemoveAll((__int64 *)v1 + 9);
  DeleteCriticalSection(v9);
  *((_QWORD *)v1 + 1) = &CRefCountedObject::`vftable';
}
