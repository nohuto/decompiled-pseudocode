/*
 * XREFs of ?OnDisconnectedFromRightSubmix@CPipeInstance@@QEAAX_J@Z @ 0x1400094A0
 * Callers:
 *     ?DisconnectFromRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@@Z @ 0x1400036D4 (-DisconnectFromRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@@Z.c)
 * Callees:
 *     ?Release@?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ @ 0x140009270 (-Release@-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ.c)
 *     ?QueryInterface@?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140009420 (-QueryInterface@-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?OnDisconnectedFromRightSubmix@CCrossProcessBaseServerEndpoint@@UEAAJ_J@Z @ 0x140018430 (-OnDisconnectedFromRightSubmix@CCrossProcessBaseServerEndpoint@@UEAAJ_J@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CPipeInstance::OnDisconnectedFromRightSubmix(CPipeInstance *this, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  _QWORD *v5; // rax
  int v6; // eax
  CCrossProcessBaseServerEndpoint *v7; // rcx
  CCrossProcessBaseServerEndpoint *v8; // rax
  __int64 (__fastcall *v9)(char *, const struct _GUID *, char **); // rax
  __int64 (__fastcall *v10)(CCrossProcessBaseServerEndpoint *); // rax
  CCrossProcessBaseServerEndpoint *v11; // [rsp+50h] [rbp+8h] BYREF
  CCrossProcessBaseServerEndpoint *v12; // [rsp+60h] [rbp+18h] BYREF

  v3 = *((_QWORD *)this + 3);
  while ( v3 )
  {
    v4 = *(_QWORD *)(v3 + 16);
    v3 = *(_QWORD *)(v3 + 8);
    if ( *(_DWORD *)(v4 + 40) == 3 )
    {
      v5 = *(_QWORD **)(v4 + 32);
      v11 = 0LL;
      v6 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, CCrossProcessBaseServerEndpoint **))*v5)(
             *v5,
             &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
             &v11);
      v7 = v11;
      if ( v6 >= 0 )
      {
        v8 = 0LL;
        v12 = 0LL;
        if ( v11 )
        {
          v9 = **(__int64 (__fastcall ***)(char *, const struct _GUID *, char **))v11;
          if ( v9 == ATL::CComObject<CCrossProcessServerInputEndpoint>::QueryInterface )
            ATL::CComObject<CCrossProcessServerInputEndpoint>::QueryInterface(
              (char *)v11,
              &GUID_23446892_84a6_4b65_ae37_233111ae5193,
              (char **)&v12);
          else
            v9((char *)v11, &GUID_23446892_84a6_4b65_ae37_233111ae5193, (char **)&v12);
          v8 = v12;
          v7 = v11;
        }
        if ( v8 )
        {
          if ( *(__int64 (__fastcall **)(CCrossProcessBaseServerEndpoint *__hidden, __int64))(*(_QWORD *)v8 + 40LL) == CCrossProcessBaseServerEndpoint::OnDisconnectedFromRightSubmix )
            CCrossProcessBaseServerEndpoint::OnDisconnectedFromRightSubmix(v8, a2);
          else
            (*(void (__fastcall **)(CCrossProcessBaseServerEndpoint *, __int64))(*(_QWORD *)v8 + 40LL))(v8, a2);
          v8 = v12;
          v7 = v11;
        }
        if ( v8 )
        {
          (*(void (__fastcall **)(CCrossProcessBaseServerEndpoint *))(*(_QWORD *)v8 + 16LL))(v8);
          v7 = v11;
        }
      }
      if ( v7 )
      {
        v10 = *(__int64 (__fastcall **)(CCrossProcessBaseServerEndpoint *))(*(_QWORD *)v7 + 16LL);
        if ( v10 == ATL::CComObject<CCrossProcessServerInputEndpoint>::Release )
          ATL::CComObject<CCrossProcessServerInputEndpoint>::Release(v7);
        else
          v10(v7);
      }
    }
  }
}
