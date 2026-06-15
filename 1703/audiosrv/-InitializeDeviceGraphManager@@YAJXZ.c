/*
 * XREFs of ?InitializeDeviceGraphManager@@YAJXZ @ 0x1800379F0
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x18003543C (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     ??$MakeAndInitialize@VCProcessSubmixManager@@UIProcessSubmixManager@@@Details@WRL@Microsoft@@YAJPEAPEAUIProcessSubmixManager@@@Z @ 0x180037A38 (--$MakeAndInitialize@VCProcessSubmixManager@@UIProcessSubmixManager@@@Details@WRL@Microsoft@@YAJ.c)
 *     ??$MakeAndInitialize@VCDeviceGraphManager@@UIDeviceGraphManager@@@Details@WRL@Microsoft@@YAJPEAPEAUIDeviceGraphManager@@@Z @ 0x180037BCC (--$MakeAndInitialize@VCDeviceGraphManager@@UIDeviceGraphManager@@@Details@WRL@Microsoft@@YAJPEAP.c)
 *     ??$MakeAndInitialize@VCDeviceGraphStore@@UIDeviceGraphStore@@@Details@WRL@Microsoft@@YAJPEAPEAUIDeviceGraphStore@@@Z @ 0x180037D5C (--$MakeAndInitialize@VCDeviceGraphStore@@UIDeviceGraphStore@@@Details@WRL@Microsoft@@YAJPEAPEAUI.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007ECA8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 InitializeDeviceGraphManager(void)
{
  int v0; // ebx
  int v1; // eax
  __int64 v3; // rdx
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v0 = Microsoft::WRL::Details::MakeAndInitialize<CDeviceGraphStore,IDeviceGraphStore>();
  if ( v0 < 0 )
  {
    v3 = 1949LL;
  }
  else
  {
    v0 = Microsoft::WRL::Details::MakeAndInitialize<CDeviceGraphManager,IDeviceGraphManager>();
    if ( v0 < 0 )
    {
      v3 = 1952LL;
    }
    else
    {
      v1 = Microsoft::WRL::Details::MakeAndInitialize<CProcessSubmixManager,IProcessSubmixManager>();
      v0 = v1;
      if ( v1 < 0 )
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x6A,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
          (const char *)(unsigned int)v1,
          v4);
      else
        v0 = 0;
      if ( v0 >= 0 )
        return 0LL;
      v3 = 1955LL;
    }
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v3,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
    (const char *)(unsigned int)v0,
    v4);
  return (unsigned int)v0;
}
