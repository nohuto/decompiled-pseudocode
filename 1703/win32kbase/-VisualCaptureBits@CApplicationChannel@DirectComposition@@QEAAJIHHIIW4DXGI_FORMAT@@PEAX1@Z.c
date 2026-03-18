/*
 * XREFs of ?VisualCaptureBits@CApplicationChannel@DirectComposition@@QEAAJIHHIIW4DXGI_FORMAT@@PEAX1@Z @ 0x1C01410F0
 * Callers:
 *     NtVisualCaptureBits @ 0x1C013F790 (NtVisualCaptureBits.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C00188E4 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C001DF70 (Win32AllocPoolWithQuotaZInit.c)
 *     OpenDwmHandle @ 0x1C00276C0 (OpenDwmHandle.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C008207C (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C01407EC (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
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
  int v13; // ebx
  unsigned __int64 v14; // rdx
  DirectComposition::CResourceMarshaler *v15; // r14
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

  v27 = (void *)-1LL;
  v26 = (void *)-1LL;
  if ( *(int *)(a1 + 24) <= 2 )
  {
    v14 = (unsigned int)(a2 - 1);
    if ( a2 && v14 < *(_QWORD *)(a1 + 88) )
    {
      _mm_lfence();
      v15 = *(DirectComposition::CResourceMarshaler **)(v14 * *(_QWORD *)(a1 + 96) + *(_QWORD *)(a1 + 64));
    }
    else
    {
      v15 = 0LL;
    }
    if ( v15
      && (*(unsigned __int8 (__fastcall **)(DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v15 + 120LL))(
           v15,
           31LL) )
    {
      v13 = 0;
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
        v13 = -1073741801;
      }
      if ( v13 >= 0 )
      {
        v13 = OpenDwmHandle(v18, (POBJECT_TYPE)ExEventObjectType, 2u, v17, v24, &v27);
        if ( v13 >= 0 )
        {
          v13 = OpenDwmHandle(a9, MmSectionObjectType, 3u, v21, v25, &v26);
          if ( v13 >= 0 )
          {
            DirectComposition::CApplicationChannel::ReleaseResource(
              (DirectComposition::CApplicationChannel *)a1,
              *(struct DirectComposition::CResourceMarshaler **)(a1 + 760));
            v22 = *(DirectComposition::CEvent **)(a1 + 752);
            if ( v22 )
              DirectComposition::CEvent::`scalar deleting destructor'(v22);
            *(_DWORD *)(a1 + 776) = a5;
            *(_DWORD *)(a1 + 780) = a6;
            *(_DWORD *)(a1 + 784) = a7;
            *(_QWORD *)(a1 + 792) = v27;
            *(_QWORD *)(a1 + 800) = v26;
            *(_QWORD *)(a1 + 752) = v19;
            *(_DWORD *)(a1 + 768) = a3;
            *(_DWORD *)(a1 + 772) = a4;
            *(_QWORD *)(a1 + 760) = v15;
            DirectComposition::CResourceMarshaler::AddRef(v15);
            v19 = 0LL;
          }
        }
      }
      if ( v19 )
        DirectComposition::CEvent::`scalar deleting destructor'(v19);
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)v13;
}
