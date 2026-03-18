/*
 * XREFs of ?AddListener@CWeakReferenceBase@@QEAAJPEAVCResource@@@Z @ 0x180034AC4
 * Callers:
 *     ?ProcessUpdate@CVisualReferenceController@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUALREFERENCECONTROLLER@@@Z @ 0x180028078 (-ProcessUpdate@CVisualReferenceController@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUALREFERENCECO.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CWeakReferenceBase::AddListener(CWeakReferenceBase *this, struct CResource *a2)
{
  char *v2; // r10
  int v3; // ebx
  __int64 v4; // rax
  unsigned int v5; // r8d
  __int64 v6; // r9
  struct CResource **v7; // rcx
  unsigned int v8; // ecx
  int v10; // eax
  struct CResource *v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = a2;
  v2 = (char *)this + 16;
  v3 = 0;
  v4 = *((unsigned int *)this + 10);
  v5 = 0;
  v6 = *((_QWORD *)this + 2);
  if ( (_DWORD)v4 )
  {
    v7 = (struct CResource **)*((_QWORD *)this + 2);
    while ( a2 != *v7 )
    {
      ++v5;
      ++v7;
      if ( v5 >= (unsigned int)v4 )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    v8 = v4 + 1;
    v3 = (int)v4 + 1 < (unsigned int)v4 ? 0x80070216 : 0;
    if ( (int)v4 + 1 < (unsigned int)v4 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xB5u);
    }
    else if ( v8 > *((_DWORD *)v2 + 5) )
    {
      v10 = DynArrayImpl<0>::AddMultipleAndSet(v2, 8LL, 1LL, &v11);
      v3 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xC0u);
    }
    else
    {
      *(_QWORD *)(v6 + 8 * v4) = v11;
      *((_DWORD *)v2 + 6) = v8;
    }
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x30u);
  }
  return (unsigned int)v3;
}
