/*
 * XREFs of ?ProcessExclusiveSurfaceUpdate@CHolographicExclusiveView@@AEAA_NIPEAUEXCLUSIVE_SURFACE_UPDATE@@@Z @ 0x1801A4BB8
 * Callers:
 *     ?FrameUpdate@CHolographicClient@@UEAAJI@Z @ 0x1801A7AB0 (-FrameUpdate@CHolographicClient@@UEAAJI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?CloseSurfaceHandles@CHolographicExclusiveView@@AEAAXXZ @ 0x1801A49F8 (-CloseSurfaceHandles@CHolographicExclusiveView@@AEAAXXZ.c)
 *     ?OpenSurfaceHandles@CHolographicExclusiveView@@AEAAJXZ @ 0x1801A4B38 (-OpenSurfaceHandles@CHolographicExclusiveView@@AEAAJXZ.c)
 */

bool __fastcall CHolographicExclusiveView::ProcessExclusiveSurfaceUpdate(
        CHolographicExclusiveView *this,
        int a2,
        struct EXCLUSIVE_SURFACE_UPDATE *a3)
{
  int v3; // ebx
  int AnalogExclusiveSurfaceUpdates; // eax
  int v8; // eax
  int v9; // edx
  __int64 v10; // rax
  __int16 v11; // cx
  char v12; // al
  HGDIOBJ v13; // rcx
  int v14; // [rsp+30h] [rbp-108h] BYREF
  _DWORD v15[3]; // [rsp+34h] [rbp-104h] BYREF
  _BYTE v16[16]; // [rsp+40h] [rbp-F8h] BYREF
  __int64 v17; // [rsp+50h] [rbp-E8h]
  unsigned int v18; // [rsp+58h] [rbp-E0h]
  int v19; // [rsp+5Ch] [rbp-DCh]
  HGDIOBJ ho; // [rsp+60h] [rbp-D8h]
  int v21; // [rsp+FCh] [rbp-3Ch]

  v3 = 0;
  v14 = 0;
  v15[0] = 0;
  if ( !*((_BYTE *)this + 73) )
    return 0;
  AnalogExclusiveSurfaceUpdates = NtTokenManagerGetAnalogExclusiveSurfaceUpdates(
                                    (unsigned int)(a2 + 1),
                                    v16,
                                    1LL,
                                    &v14,
                                    v15);
  if ( AnalogExclusiveSurfaceUpdates >= 0 )
  {
    if ( v14 )
    {
      if ( v17 == *((_QWORD *)this + 14)
        || (*((_QWORD *)this + 14) = v17,
            CHolographicExclusiveView::CloseSurfaceHandles((HANDLE *)this),
            v8 = CHolographicExclusiveView::OpenSurfaceHandles(this),
            v8 >= 0) )
      {
        v9 = v19;
        v10 = v18;
        *((_DWORD *)this + 24) = v19;
        *(_QWORD *)a3 = *((_QWORD *)this + v10 + 17);
        if ( v9 )
          v3 = v9 - 1;
        v11 = v21;
        *((_DWORD *)a3 + 2) = v3;
        *((_DWORD *)a3 + 3) = *((_DWORD *)this + 17);
        *((_DWORD *)a3 + 4) = 1065353216;
        *((_BYTE *)a3 + 20) = (v11 & 2) != 0;
        *((_BYTE *)a3 + 21) = v11 & 1;
        v12 = HIBYTE(v11) & 1;
        *((_BYTE *)a3 + 23) = (v11 & 0x200) == 0;
        v13 = ho;
        *((_BYTE *)a3 + 22) = v12;
        if ( (unsigned __int64)v13 >= 2 )
          DeleteObject(v13);
        LOBYTE(v3) = 1;
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x16Cu);
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, AnalogExclusiveSurfaceUpdates | 0x10000000, 0x162u);
  }
  return v3;
}
