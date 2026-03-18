/*
 * XREFs of ?RegisterSnapshotToPerform@CComposition@@QEAAJPEAVCSnapshot@@@Z @ 0x18013F9C0
 * Callers:
 *     ?CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z @ 0x180164F10 (-CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CComposition::RegisterSnapshotToPerform(CComposition *this, struct CSnapshot *a2)
{
  char *v2; // r10
  int v3; // ebx
  struct CSnapshot **v4; // rax
  unsigned int v5; // ecx
  __int64 v6; // rcx
  unsigned int v7; // edx
  unsigned int v8; // eax
  int v9; // eax
  unsigned int v11; // [rsp+40h] [rbp+8h]
  struct CSnapshot *v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = a2;
  v2 = (char *)this + 680;
  v3 = 0;
  v4 = (struct CSnapshot **)*((_QWORD *)this + 85);
  v5 = 0;
  if ( *((_DWORD *)v2 + 6) )
  {
    while ( a2 != *v4 )
    {
      ++v5;
      ++v4;
      if ( v5 >= *((_DWORD *)v2 + 6) )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    v6 = *((unsigned int *)v2 + 6);
    v7 = v11;
    v8 = v6 + 1;
    if ( (int)v6 + 1 >= (unsigned int)v6 )
      v7 = v6 + 1;
    v3 = v8 < (unsigned int)v6 ? 0x80070216 : 0;
    if ( v8 < (unsigned int)v6 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xB5u);
    }
    else if ( v7 > *((_DWORD *)v2 + 5) )
    {
      v9 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v2, 8u, 1, &v12);
      v3 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)v2 + 8 * v6) = v12;
      *((_DWORD *)v2 + 6) = v7;
    }
    if ( v3 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xC56u);
  }
  return (unsigned int)v3;
}
