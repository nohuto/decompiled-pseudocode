/*
 * XREFs of ?CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x180010C20
 * Callers:
 *     ?CloneVisualTree@CVisual@@UEAAJPEAPEAV1@_N11@Z @ 0x180026320 (-CloneVisualTree@CVisual@@UEAAJPEAPEAV1@_N11@Z.c)
 * Callees:
 *     ?Create@CClientArea@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z @ 0x180010A98 (-Create@CClientArea@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z.c)
 *     ?CloneVisualTree@CVisual@@UEAAJPEAPEAV1@_N11@Z @ 0x180026320 (-CloneVisualTree@CVisual@@UEAAJPEAPEAV1@_N11@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CClientArea::CloneVisualTree(CClientArea *this, struct CVisual **a2, bool a3, bool a4, bool a5)
{
  __int64 v5; // rax
  unsigned int v6; // ebx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rax
  int v14; // eax
  int v15; // eax
  struct CClientArea *v17; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v18; // [rsp+60h] [rbp+8h] BYREF

  v5 = *((_QWORD *)this + 30);
  v6 = 0;
  v18 = 0;
  if ( v5 )
  {
    v11 = *(_QWORD *)(v5 + 24);
    if ( v11 )
    {
      v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned int *))(*(_QWORD *)v11 + 320LL))(
              v11,
              *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
              &v18);
      v6 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x84u);
      }
      else
      {
        v13 = *((_QWORD *)this + 2);
        v17 = 0LL;
        v14 = CClientArea::Create(*(struct IDwmChannel **)(v13 + 16), v18, &v17);
        v6 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x88u);
        }
        else
        {
          *a2 = v17;
          v15 = CVisual::CloneVisualTree(this, a2, a3, a4, a5);
          v6 = v15;
          if ( v15 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x93u);
        }
      }
    }
  }
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 128LL))(
    *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
    v18);
  return v6;
}
