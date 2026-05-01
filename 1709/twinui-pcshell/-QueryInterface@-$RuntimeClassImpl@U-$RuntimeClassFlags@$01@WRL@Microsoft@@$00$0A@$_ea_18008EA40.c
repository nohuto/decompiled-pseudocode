/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UITaskbarLayoutParserTest@@UITaskbarLayoutParser@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18008EA40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<ITaskbarLayoutParserTest,ITaskbarLayoutParser,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>::QueryInterface(
        _QWORD *a1,
        _DWORD *a2,
        _QWORD **a3)
{
  unsigned int v3; // ebx
  char v5; // cl
  char v6; // al

  v3 = 0;
  *a3 = 0LL;
  if ( !*a2
    && a2[1] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    *a3 = a1;
    (*(void (__fastcall **)(_QWORD *, _DWORD *, _QWORD **, _QWORD *))(*a1 + 8LL))(a1, a2, a3, a1);
  }
  else
  {
    v5 = 1;
    if ( *a2 == -744860190
      && a2[1] == *(_DWORD *)&GUID_d39a55e2_004f_4aa6_94da_3555a84964a5.Data2
      && a2[2] == *(_DWORD *)GUID_d39a55e2_004f_4aa6_94da_3555a84964a5.Data4
      && a2[3] == *(_DWORD *)&GUID_d39a55e2_004f_4aa6_94da_3555a84964a5.Data4[4] )
    {
      *a3 = a1;
      v6 = 1;
    }
    else
    {
      v6 = 0;
    }
    if ( v6
      || (*a2 != 818432662
       || a2[1] != *(_DWORD *)&GUID_30c84a96_2f07_4ff0_9553_30ce1f23ccb3.Data2
       || a2[2] != *(_DWORD *)GUID_30c84a96_2f07_4ff0_9553_30ce1f23ccb3.Data4
       || a2[3] != *(_DWORD *)&GUID_30c84a96_2f07_4ff0_9553_30ce1f23ccb3.Data4[4]
        ? (_QWORD *)(v5 = 0)
        : (*a3 = a1),
          v5) )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD **, _QWORD *))(**a3 + 8LL))(*a3, **a3, a3, a1);
    }
    else
    {
      return (unsigned int)-2147467262;
    }
  }
  return v3;
}
