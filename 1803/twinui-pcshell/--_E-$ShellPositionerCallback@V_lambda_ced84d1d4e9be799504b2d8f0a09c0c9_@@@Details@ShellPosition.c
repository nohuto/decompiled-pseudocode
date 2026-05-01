/*
 * XREFs of ??_E?$ShellPositionerCallback@V_lambda_ced84d1d4e9be799504b2d8f0a09c0c9_@@@Details@ShellPositionerHelpers@@UEAAPEAXI@Z @ 0x180025590
 * Callers:
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_ced84d1d4e9be799504b2d8f0a09c0c9___ @ 0x180025720 (ShellPositionerHelpers--PerformCallbackOnView__lambda_ced84d1d4e9be799504b2d8f0a09c0c9___.c)
 * Callees:
 *     ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIShellPositionerCallback@@VFtmBase@23@@WRL@Microsoft@@UEAA@XZ @ 0x1800256E4 (--1-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIShellPositionerCallback@@VFtmBase@23.c)
 *     ??3@YAXPEAX@Z @ 0x180098FA8 (--3@YAXPEAX@Z.c)
 */

void *__fastcall ShellPositionerHelpers::Details::ShellPositionerCallback<_lambda_ced84d1d4e9be799504b2d8f0a09c0c9_>::`vector deleting destructor'(
        void *Block,
        char a2)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IShellPositionerCallback,Microsoft::WRL::FtmBase>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IShellPositionerCallback,Microsoft::WRL::FtmBase>();
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
