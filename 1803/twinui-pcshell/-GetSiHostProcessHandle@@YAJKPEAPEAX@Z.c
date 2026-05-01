/*
 * XREFs of ?GetSiHostProcessHandle@@YAJKPEAPEAX@Z @ 0x180094148
 * Callers:
 *     ?SnapshotCpuCyclesUsedBySiHost@XamlLauncherState@@AEAAJPEA_K@Z @ 0x180078F80 (-SnapshotCpuCyclesUsedBySiHost@XamlLauncherState@@AEAAJPEA_K@Z.c)
 *     ?v_PublishServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x1801D10C0 (-v_PublishServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z.c)
 *     ?v_PublishServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x1801DAA20 (-v_PublishServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z.c)
 *     ?IsShellInfraHostRunning@@YA_NXZ @ 0x1801DD138 (-IsShellInfraHostRunning@@YA_NXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IUnknown_GetServerProcessHandle@@YAJPEAUIUnknown@@KPEAPEAX@Z @ 0x1800941E0 (-IUnknown_GetServerProcessHandle@@YAJPEAUIUnknown@@KPEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetSiHostProcessHandle(unsigned int a1, void **a2)
{
  HRESULT Instance; // eax
  unsigned int v5; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IUnknown *ppv; // [rsp+58h] [rbp+10h] BYREF

  *a2 = 0LL;
  ppv = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  Instance = CoCreateInstance(
               &GUID_6b3b8d23_fa8d_40b9_8dbd_b950333e2c52,
               0LL,
               0x404u,
               &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
               (LPVOID *)&ppv);
  v5 = Instance;
  if ( Instance < 0 )
  {
    v7 = 13LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"internal\\shell\\private\\inc\\shellinfrastructurehelpers.h",
      (const char *)(unsigned int)Instance);
    goto LABEL_4;
  }
  Instance = IUnknown_GetServerProcessHandle(ppv, a1, a2);
  v5 = Instance;
  if ( Instance < 0 )
  {
    v7 = 14LL;
    goto LABEL_7;
  }
  v5 = 0;
LABEL_4:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  return v5;
}
