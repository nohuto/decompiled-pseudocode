/*
 * XREFs of ??1?$vector@UInputInfo@@V?$allocator@UInputInfo@@@std@@@std@@QEAA@XZ @ 0x180067378
 * Callers:
 *     ??1MPCRawInputProvider@@MEAA@XZ @ 0x18006697C (--1MPCRawInputProvider@@MEAA@XZ.c)
 *     ?OnInputReceived@MPCRawInputProvider@@IEAAJXZ @ 0x180066E98 (-OnInputReceived@MPCRawInputProvider@@IEAAJXZ.c)
 *     ??_EBufferedInputTarget@@MEAAPEAXI@Z @ 0x1800A4B10 (--_EBufferedInputTarget@@MEAAPEAXI@Z.c)
 *     _MPCRawInputProvider::_MPCRawInputProvider_::_1_::dtor$6 @ 0x1800CF916 (_MPCRawInputProvider--_MPCRawInputProvider_--_1_--dtor$6.c)
 *     _MPCRawInputProvider::OnInputReceived_::_1_::dtor$0 @ 0x1800CF954 (_MPCRawInputProvider--OnInputReceived_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 */

void __fastcall std::vector<InputInfo>::~vector<InputInfo>(unsigned __int64 *a1)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rax

  v2 = *a1;
  if ( v2 )
  {
    v3 = (__int64)(a1[2] - v2) / 2848;
    if ( v3 <= 0x1702E05C0B8170LL )
    {
      if ( 2848 * v3 < 0x1000 )
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
    _o__invalid_parameter_noinfo_noreturn(v2);
    JUMPOUT(0x180067409LL);
  }
}
