/*
 * XREFs of ?VisualCaptureBits@CApplicationChannel@DirectComposition@@QEAAJIHHIIW4DXGI_FORMAT@@PEAX1@Z @ 0x1C0140610
 * Callers:
 *     NtVisualCaptureBits @ 0x1C013EBA0 (NtVisualCaptureBits.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0026FA0 (Win32AllocPoolWithQuotaZInit.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C002DEE0 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     OpenDwmHandle @ 0x1C003C85C (OpenDwmHandle.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C00814A0 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C013FCEC (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::VisualCaptureBits(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        PVOID Object,
        PVOID a9)
{
  DirectComposition::CResourceMarshaler *v9; // r14
  signed int v14; // ebx
  unsigned __int64 v15; // rdx
  DirectComposition::CEvent *v16; // rax
  __int64 v17; // r9
  PVOID v18; // rbp
  DirectComposition::CEvent *v19; // rsi
  PVOID v20; // rcx
  __int64 v21; // r9
  DirectComposition::CEvent *v22; // rcx
  int v24; // [rsp+20h] [rbp-48h]
  int v25; // [rsp+20h] [rbp-48h]
  void *v26; // [rsp+30h] [rbp-38h] BYREF
  void *v27; // [rsp+70h] [rbp+8h] BYREF

  v9 = 0LL;
  v27 = (void *)-1LL;
  v26 = (void *)-1LL;
  v14 = *(_DWORD *)(a1 + 24) > 2 ? 0xC0000022 : 0;
  if ( *(int *)(a1 + 24) <= 2 )
  {
    v15 = (unsigned int)(a2 - 1);
    if ( a2 && v15 < *(_QWORD *)(a1 + 80) )
    {
      _mm_lfence();
      v9 = *(DirectComposition::CResourceMarshaler **)(v15 * *(_QWORD *)(a1 + 88) + *(_QWORD *)(a1 + 56));
    }
    if ( !v9
      || !(*(unsigned __int8 (__fastcall **)(DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v9 + 120LL))(
            v9,
            134LL) )
    {
      v14 = -1073741811;
    }
  }
  if ( v14 >= 0 )
  {
    v14 = 0;
    v16 = (DirectComposition::CEvent *)Win32AllocPoolWithQuotaZInit(0x10uLL, 0x76654344u);
    v18 = Object;
    v19 = v16;
    if ( v16 )
    {
      v20 = Object;
      *((_QWORD *)v16 + 1) = Object;
      ObfReferenceObject(v20);
    }
    else
    {
      v14 = -1073741801;
    }
    if ( v14 >= 0 )
    {
      v14 = OpenDwmHandle(v18, (POBJECT_TYPE)ExEventObjectType, 2u, v17, v24, &v27);
      if ( v14 >= 0 )
      {
        v14 = OpenDwmHandle(a9, MmSectionObjectType, 3u, v21, v25, &v26);
        if ( v14 >= 0 )
        {
          DirectComposition::CApplicationChannel::ReleaseResource(
            (DirectComposition::CApplicationChannel *)a1,
            *(struct DirectComposition::CResourceMarshaler **)(a1 + 736));
          v22 = *(DirectComposition::CEvent **)(a1 + 728);
          if ( v22 )
            DirectComposition::CEvent::`scalar deleting destructor'(v22);
          *(_DWORD *)(a1 + 752) = a5;
          *(_DWORD *)(a1 + 756) = a6;
          *(_DWORD *)(a1 + 760) = a7;
          *(_QWORD *)(a1 + 768) = v27;
          *(_QWORD *)(a1 + 776) = v26;
          *(_QWORD *)(a1 + 728) = v19;
          *(_DWORD *)(a1 + 744) = a3;
          *(_DWORD *)(a1 + 748) = a4;
          *(_QWORD *)(a1 + 736) = v9;
          DirectComposition::CResourceMarshaler::AddRef(v9);
          v19 = 0LL;
        }
      }
    }
    if ( v19 )
      DirectComposition::CEvent::`scalar deleting destructor'(v19);
  }
  return (unsigned int)v14;
}
