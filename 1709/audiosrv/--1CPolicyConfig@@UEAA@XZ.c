/*
 * XREFs of ??1CPolicyConfig@@UEAA@XZ @ 0x18007F5A0
 * Callers:
 *     ??_GCPolicyConfig@@UEAAPEAXI@Z @ 0x180061238 (--_GCPolicyConfig@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180028D50 (--3@YAXPEAX@Z.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180032C98 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18005F724 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?FreeNode@?$CAtlList@PEAVCAudioSessionStore@@V?$CElementTraits@PEAVCAudioSessionStore@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x180064F78 (-FreeNode@-$CAtlList@PEAVCAudioSessionStore@@V-$CElementTraits@PEAVCAudioSessionStore@@@ATL@@@AT.c)
 *     ?RemoveAll@?$CAtlList@PEAGV?$CElementTraits@PEAG@ATL@@@ATL@@QEAAXXZ @ 0x1800651BC (-RemoveAll@-$CAtlList@PEAGV-$CElementTraits@PEAG@ATL@@@ATL@@QEAAXXZ.c)
 *     ?Release@CAudioSessionStore@@UEAAKXZ @ 0x180086A90 (-Release@CAudioSessionStore@@UEAAKXZ.c)
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
  ATL::CAtlException *v9; // [rsp+28h] [rbp-40h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-38h] BYREF
  char v11; // [rsp+38h] [rbp-30h]
  CAudioSessionStore *v13; // [rsp+88h] [rbp+20h]

  v1 = this;
  *(_QWORD *)this = &CPolicyConfig::`vftable'{for `IPolicyConfig'};
  *((_QWORD *)this + 1) = &CPolicyConfig::`vftable'{for `CRefCountedObject'};
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  v11 = 0;
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
        v13 = v6;
      }
      catch ( ATL::CAtlException *v9 )
      {
        v8 = (int *)v9;
        if ( *(_DWORD *)v9 == -1073741571 )
          _o__resetstkoflw();
        v1 = this;
        if ( *v8 >= 0 )
        {
          v6 = v13;
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
  if ( v11 )
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
  ATL::CAtlList<unsigned short *,ATL::CElementTraits<unsigned short *>>::RemoveAll((__int64 *)v1 + 9);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)v1 + 32));
  *((_QWORD *)v1 + 1) = &CRefCountedObject::`vftable';
}
