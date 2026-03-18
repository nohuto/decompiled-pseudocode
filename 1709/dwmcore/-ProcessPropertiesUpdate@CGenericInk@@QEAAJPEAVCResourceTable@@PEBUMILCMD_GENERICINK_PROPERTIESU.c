/*
 * XREFs of ?ProcessPropertiesUpdate@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GENERICINK_PROPERTIESUPDATE@@PEBXI@Z @ 0x180166FB8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?AddMultipleAndSet@?$DynArray@E$0A@@@QEAAJPEFBEI@Z @ 0x180136E50 (-AddMultipleAndSet@-$DynArray@E$0A@@@QEAAJPEFBEI@Z.c)
 */

__int64 __fastcall CGenericInk::ProcessPropertiesUpdate(
        CGenericInk *this,
        struct CResourceTable *a2,
        const struct MILCMD_GENERICINK_PROPERTIESUPDATE *a3,
        const void *a4,
        unsigned int a5)
{
  _QWORD *v5; // r15
  signed int v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // ebp
  unsigned int v10; // esi
  __int64 v11; // r14
  __int64 v12; // rcx
  signed int v13; // eax

  *((_DWORD *)this + 40) = 0;
  v5 = (_QWORD *)((char *)this + 136);
  v7 = DynArray<unsigned char,0>::AddMultipleAndSet((__int64)this + 136, a4, a5);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0x12u);
  }
  else
  {
    v9 = *((_DWORD *)this + 28);
    v10 = 0;
    if ( v9 )
    {
      v11 = 0LL;
      while ( 1 )
      {
        v12 = *(_QWORD *)(*(_QWORD *)(v11 + *((_QWORD *)this + 11)) + 104LL);
        v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v12 + 40LL))(
                v12,
                *v5,
                *((unsigned int *)this + 40));
        v8 = v13;
        if ( v13 < 0 )
          break;
        ++v10;
        v11 += 8LL;
        if ( v10 >= v9 )
          goto LABEL_6;
      }
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, 0x19u);
    }
    else
    {
LABEL_6:
      (*(void (__fastcall **)(CGenericInk *, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(this, 0LL, 0LL);
    }
  }
  return v8;
}
