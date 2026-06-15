/*
 * XREFs of ?CreateInstance@PhoneCallAudio@@SAJPEAPEAUITelephonyControl@@@Z @ 0x18005F664
 * Callers:
 *     ?FinalConstruct@CAudioSessionManagerProvider@@QEAAJXZ @ 0x180059FF4 (-FinalConstruct@CAudioSessionManagerProvider@@QEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000B390 (--2@YAPEAX_K@Z.c)
 *     ?Release@PhoneCallAudio@@UEAAKXZ @ 0x180036DE0 (-Release@PhoneCallAudio@@UEAAKXZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x18005587C (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?Initialize@PhoneCallAudio@@AEAAJXZ @ 0x180055AF8 (-Initialize@PhoneCallAudio@@AEAAJXZ.c)
 *     ??0PhoneCallAudio@@IEAA@XZ @ 0x180055B74 (--0PhoneCallAudio@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall PhoneCallAudio::CreateInstance(struct ITelephonyControl **a1)
{
  unsigned int v2; // esi
  struct IUnknown *v3; // rbx
  struct ITelephonyControl *v4; // rdi
  PhoneCallAudio *v5; // rax
  int v6; // eax
  ULONG (__stdcall *Release)(IUnknown *); // rax
  struct IUnknown *v9; // [rsp+50h] [rbp+8h] BYREF
  struct IUnknown *v10; // [rsp+58h] [rbp+10h]
  PhoneCallAudio *v11; // [rsp+60h] [rbp+18h]

  v2 = 0;
  v3 = 0LL;
  v10 = 0LL;
  v4 = 0LL;
  v9 = 0LL;
  if ( a1 )
  {
    *a1 = 0LL;
    v5 = (PhoneCallAudio *)operator new(0xF8uLL);
    v11 = v5;
    if ( v5 )
      v3 = (struct IUnknown *)PhoneCallAudio::PhoneCallAudio(v5);
    else
      v3 = 0LL;
    v10 = v3;
    if ( v3 )
    {
      v6 = PhoneCallAudio::Initialize((PhoneCallAudio *)v3);
      if ( v6 < 0 )
      {
        v2 = v6;
      }
      else
      {
        if ( v3 != (struct IUnknown *)-8LL )
        {
          ATL::AtlComPtrAssign(&v9, v3 + 1);
          v4 = (struct ITelephonyControl *)v9;
        }
        *a1 = v4;
      }
    }
    else
    {
      v2 = -2147024882;
    }
  }
  else
  {
    v2 = -2147467261;
  }
  if ( v3 )
  {
    Release = v3->lpVtbl->Release;
    if ( (char *)Release == (char *)PhoneCallAudio::Release )
      PhoneCallAudio::Release((PhoneCallAudio *)v3);
    else
      ((void (__fastcall *)(struct IUnknown *))Release)(v3);
  }
  return v2;
}
