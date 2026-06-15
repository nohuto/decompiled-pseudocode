/*
 * XREFs of ?TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@@Z @ 0x1800CE2E8
 * Callers:
 *     ?APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEADKJ_N5@Z @ 0x1800CF1EC (-APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEADKJ_N5@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@W4APO_TYPE@@_N2AEBU_GUID@@@Z @ 0x1800CE058 (-TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@W4APO_TYPE@@_N2AEBU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TrackSystemEffectBehavior(__int64 a1, int a2, char a3, char a4, __int64 a5)
{
  int Instance; // ebx
  __int64 v10; // r8
  LPVOID *ppv; // [rsp+20h] [rbp-28h]
  LPVOID v13[3]; // [rsp+30h] [rbp-18h] BYREF

  v13[1] = (LPVOID)-2LL;
  v13[0] = 0LL;
  a5 = 0LL;
  if ( (unsigned int)GetClassFromEndpointId(a1) == 3 )
  {
    Instance = 0;
  }
  else
  {
    Instance = CoCreateInstance(
                 &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
                 0LL,
                 0x17u,
                 &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                 v13);
    if ( Instance >= 0 )
    {
      Instance = (*(__int64 (__fastcall **)(LPVOID, __int64, __int64 *))(*(_QWORD *)v13[0] + 40LL))(v13[0], a1, &a5);
      if ( Instance >= 0 )
      {
        LOBYTE(v10) = a3;
        Instance = TrackSystemEffectBehavior(a5, a2, v10, a4, (__int64)ppv);
      }
    }
  }
  if ( a5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a5 + 16LL))(a5);
  if ( v13[0] )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v13[0] + 16LL))(v13[0]);
  return (unsigned int)Instance;
}
