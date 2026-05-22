/*
 * XREFs of ??1?$vector@ULegacyInputInfo@@V?$allocator@ULegacyInputInfo@@@std@@@std@@QEAA@XZ @ 0x18005E8F0
 * Callers:
 *     ??1MPCRawInputProvider@@MEAA@XZ @ 0x18005DCF4 (--1MPCRawInputProvider@@MEAA@XZ.c)
 *     ?OnInputReceived@MPCRawInputProvider@@IEAAJXZ @ 0x18005E138 (-OnInputReceived@MPCRawInputProvider@@IEAAJXZ.c)
 *     _MPCRawInputProvider::OnInputReceived_::_1_::dtor$0 @ 0x1800E6A93 (_MPCRawInputProvider--OnInputReceived_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 */

void __fastcall std::vector<LegacyInputInfo>::~vector<LegacyInputInfo>(unsigned __int64 *a1)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rax

  v2 = *a1;
  if ( v2 )
  {
    v3 = (__int64)(a1[2] - v2) / 1736;
    if ( v3 <= 0x25C04B8097012ELL )
    {
      if ( 1736 * v3 < 0x1000 )
      {
LABEL_8:
        operator delete((void *)v2);
        *a1 = 0LL;
        a1[1] = 0LL;
        a1[2] = 0LL;
        return;
      }
      if ( (v2 & 0x1F) == 0 )
      {
        v4 = *(_QWORD *)(v2 - 8);
        if ( v4 < v2 )
        {
          v2 = v2 - v4 - 8;
          if ( v2 <= 0x1F )
          {
            v2 = v4;
            goto LABEL_8;
          }
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v2, v3);
    JUMPOUT(0x18005E97ELL);
  }
}
