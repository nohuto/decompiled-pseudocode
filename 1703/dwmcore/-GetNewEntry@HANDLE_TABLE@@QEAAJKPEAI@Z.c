/*
 * XREFs of ?GetNewEntry@HANDLE_TABLE@@QEAAJKPEAI@Z @ 0x18007F63C
 * Callers:
 *     ??0CInteraction@@IEAA@PEAVCComposition@@@Z @ 0x18004B56C (--0CInteraction@@IEAA@PEAVCComposition@@@Z.c)
 *     ?CreateOrAddRefOnChannel@CHandleTable@@QEAAJPEAVCChannel@@W4MIL_RESOURCE_TYPE@@PEAI@Z @ 0x18007F2C4 (-CreateOrAddRefOnChannel@CHandleTable@@QEAAJPEAVCChannel@@W4MIL_RESOURCE_TYPE@@PEAI@Z.c)
 *     ?DuplicateHandle@CHandleTable@@QEAAJPEAVCChannel@@I0PEAI@Z @ 0x18007F434 (-DuplicateHandle@CHandleTable@@QEAAJPEAVCChannel@@I0PEAI@Z.c)
 *     ?DuplicateHandleOnTarget@CHandleTable@@QEAAJIIW4MIL_RESOURCE_TYPE@@PEAVCChannel@@PEAI@Z @ 0x18007F530 (-DuplicateHandleOnTarget@CHandleTable@@QEAAJIIW4MIL_RESOURCE_TYPE@@PEAVCChannel@@PEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Resize@HANDLE_TABLE@@AEAAJI@Z @ 0x18007F6FC (-Resize@HANDLE_TABLE@@AEAAJI@Z.c)
 *     ?ResizeToFit@HANDLE_TABLE@@QEAAJI@Z @ 0x18007F798 (-ResizeToFit@HANDLE_TABLE@@QEAAJI@Z.c)
 */

__int64 __fastcall HANDLE_TABLE::GetNewEntry(HANDLE_TABLE *this, int a2, unsigned int *a3)
{
  unsigned int v4; // esi
  unsigned int v7; // edi
  __int64 i; // rax
  unsigned int v9; // edx
  int v10; // eax
  unsigned int v12; // eax
  int v13; // eax
  int v14; // eax

  v4 = 0;
  if ( *((_DWORD *)this + 3) >= 0x400u || (v13 = HANDLE_TABLE::Resize(this, 0x400u), v4 = v13, v13 >= 0) )
  {
    *a3 = 0;
    v7 = *((_DWORD *)this + 4);
    for ( i = v7 * *((_DWORD *)this + 2); *(_DWORD *)(i + *((_QWORD *)this + 3)); i = *((_DWORD *)this + 2) * v7 )
    {
      v12 = v7 + 1;
      v7 = 1;
      if ( v12 != *((_DWORD *)this + 3) )
        v7 = v12;
      if ( v7 == *((_DWORD *)this + 4) )
      {
        v7 = 0;
        break;
      }
    }
    v9 = *((_DWORD *)this + 3);
    v10 = v7 + 1;
    if ( v7 + 1 == v9 )
      v10 = 1;
    *((_DWORD *)this + 4) = v10;
    if ( !v7 )
    {
      v7 = v9;
      v14 = HANDLE_TABLE::ResizeToFit(this, v9);
      v4 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x156u);
        return v4;
      }
      *((_DWORD *)this + 4) = v7 + 1;
    }
    *(_DWORD *)(v7 * *((_DWORD *)this + 2) + *((_QWORD *)this + 3)) = a2;
    *a3 = v7;
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x120u);
  }
  return v4;
}
