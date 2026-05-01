/*
 * XREFs of ?GetFrame@CApplicationFrameService@@UEAAJPEBGKPEAPEAUIApplicationFrameProxy@@@Z @ 0x18004BE70
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CApplicationFrameWrapper@@QEAAJPEBGK@Z @ 0x18004B1E4 (-Initialize@CApplicationFrameWrapper@@QEAAJPEBGK@Z.c)
 *     ?_TransferFromPoolToActive@CApplicationFrameService@@AEAAJ_K@Z @ 0x18004CEDC (-_TransferFromPoolToActive@CApplicationFrameService@@AEAAJ_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
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
  CApplicationFrameWrapper **v10; // rax
  CApplicationFrameWrapper *v11; // rcx
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
    if ( this[8] )
    {
      v8 = CApplicationFrameWrapper::Initialize(*this[7], a2, a3);
      if ( v8 >= 0 )
      {
        v12 = *this[7];
        if ( v12 )
          (*(void (__fastcall **)(struct IApplicationFrameProxy *))(*(_QWORD *)v12 + 8LL))(v12);
        v8 = CApplicationFrameService::_TransferFromPoolToActive((CApplicationFrameService *)(this - 4), 0LL);
        if ( v8 < 0 )
        {
          v15 = this[7];
          v16 = *v15;
          v17 = (void *)*((_QWORD *)*v15 + 14);
          if ( v17 )
          {
            CoTaskMemFree(v17);
            *((_QWORD *)v16 + 14) = 0LL;
          }
          *((_QWORD *)v16 + 15) = 0LL;
          *((_QWORD *)v16 + 16) = 0LL;
          *((_DWORD *)v16 + 34) = 0;
          RemovePropW(*((HWND *)v16 + 6), L"LastSetGlomIdForReconstitution");
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
    if ( this[8] )
    {
      while ( 1 )
      {
        if ( CompareStringOrdinal(*((LPCWCH *)this[7][v9] + 14), -1, a2, -1, 1) == 2 )
        {
          v10 = this[7];
          v11 = v10[v9];
          if ( *((_DWORD *)v11 + 34) == a3 )
            break;
        }
        if ( ++v9 >= (unsigned __int64)this[8] )
          return (unsigned int)v8;
      }
      v12 = v10[v9];
      if ( v11 )
        (*(void (__fastcall **)(CApplicationFrameWrapper *))(*(_QWORD *)v11 + 8LL))(v11);
      v8 = CApplicationFrameService::_TransferFromPoolToActive((CApplicationFrameService *)(this - 4), v9);
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
