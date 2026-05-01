/*
 * XREFs of ?GetFrame@CApplicationFrameService@@UEAAJPEBGKPEAPEAUIApplicationFrameProxy@@@Z @ 0x18004E360
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CApplicationFrameWrapper@@QEAAJPEBGK@Z @ 0x18004D6B4 (-Initialize@CApplicationFrameWrapper@@QEAAJPEBGK@Z.c)
 *     ?_TransferFromPoolToActive@CApplicationFrameService@@AEAAJ_K@Z @ 0x18004F4C4 (-_TransferFromPoolToActive@CApplicationFrameService@@AEAAJ_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationFrameService::GetFrame(
        CApplicationFrameWrapper ***this,
        const unsigned __int16 *a2,
        unsigned int a3,
        struct IApplicationFrameProxy **a4)
{
  int v8; // esi
  unsigned __int64 v9; // rbp
  CApplicationFrameWrapper **v10; // rbx
  CApplicationFrameWrapper *v11; // rax
  struct IApplicationFrameProxy *v12; // rbx
  struct IApplicationFrameProxy *v13; // rcx
  struct IApplicationFrameProxy *v14; // rax
  CApplicationFrameWrapper **v15; // rax
  CApplicationFrameWrapper *v16; // rdi
  void *v17; // rcx

  *a4 = 0LL;
  v8 = -2147023728;
  if ( BYTE4(CApplicationManagerUtility::g_pIAMGlobals[11].Ptr) )
  {
    if ( this[10] )
    {
      v8 = CApplicationFrameWrapper::Initialize(*this[9], a2, a3);
      if ( v8 >= 0 )
      {
        v12 = *this[9];
        if ( v12 )
          (*(void (__fastcall **)(struct IApplicationFrameProxy *))(*(_QWORD *)v12 + 8LL))(v12);
        v8 = CApplicationFrameService::_TransferFromPoolToActive((CApplicationFrameService *)(this - 5), 0LL);
        if ( v8 < 0 )
        {
          v15 = this[9];
          v16 = *v15;
          v17 = (void *)*((_QWORD *)*v15 + 16);
          if ( v17 )
          {
            CoTaskMemFree(v17);
            *((_QWORD *)v16 + 16) = 0LL;
          }
          *((_QWORD *)v16 + 17) = 0LL;
          *((_QWORD *)v16 + 18) = 0LL;
          *((_DWORD *)v16 + 38) = 0;
          RemovePropW(*((HWND *)v16 + 8), L"LastSetGlomIdForReconstitution");
        }
        else
        {
          v14 = v12;
          v12 = 0LL;
          *a4 = v14;
        }
        if ( v12 )
LABEL_23:
          (*(void (__fastcall **)(struct IApplicationFrameProxy *))(*(_QWORD *)v12 + 16LL))(v12);
      }
    }
  }
  else
  {
    v9 = 0LL;
    if ( this[10] )
    {
      while ( 1 )
      {
        if ( CompareStringOrdinal(*((LPCWCH *)this[9][v9] + 16), -1, a2, -1, 1) == 2 )
        {
          v10 = this[9];
          v11 = v10[v9];
          if ( *((_DWORD *)v11 + 38) == a3 )
            break;
        }
        if ( ++v9 >= (unsigned __int64)this[10] )
          return (unsigned int)v8;
      }
      v12 = v10[v9];
      if ( v11 )
        (*(void (__fastcall **)(CApplicationFrameWrapper *))(*(_QWORD *)v11 + 8LL))(v11);
      v8 = CApplicationFrameService::_TransferFromPoolToActive((CApplicationFrameService *)(this - 5), v9);
      if ( v8 >= 0 )
      {
        v13 = v12;
        v12 = 0LL;
        *a4 = v13;
      }
      if ( v12 )
        goto LABEL_23;
    }
  }
  return (unsigned int)v8;
}
