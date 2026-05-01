/*
 * XREFs of ?CreateComponent@ImmersiveShellComponentCreator@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x180004B00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetClassObject@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAJAEBU_GUID@@0PEAPEAXPEBG@Z @ 0x180005310 (-GetClassObject@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAJAEB.c)
 *     ?GetModule@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV?$DefaultModule@$00@Details@23@XZ @ 0x1800053BC (-GetModule@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV-$Defau.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ImmersiveShellComponentCreator::CreateComponent(
        ImmersiveShellComponentCreator *this,
        const struct _GUID *a2,
        const struct _GUID *a3,
        void **a4)
{
  Microsoft::WRL::Details *Module; // rax
  int ClassObject; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  Module = (Microsoft::WRL::Details *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::GetModule(this);
  ClassObject = Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::GetClassObject(Module);
  v8 = ClassObject;
  if ( ClassObject >= 0 )
  {
    ClassObject = (*(__int64 (__fastcall **)(_QWORD, _QWORD, const struct _GUID *, void **))(MEMORY[0] + 24LL))(
                    0LL,
                    0LL,
                    a3,
                    a4);
    v8 = ClassObject;
    if ( ClassObject >= 0 )
      return 0;
    v9 = 19LL;
  }
  else
  {
    v9 = 18LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v9,
    (__int64)"internal\\onecoreuapshell\\private\\inc\\immersiveshellcomponentcreator.h",
    (const char *)(unsigned int)ClassObject);
  return v8;
}
