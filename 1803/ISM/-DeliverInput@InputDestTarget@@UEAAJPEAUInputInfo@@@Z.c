/*
 * XREFs of ?DeliverInput@InputDestTarget@@UEAAJPEAUInputInfo@@@Z @ 0x180082F20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009880 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsIdentityTransform@@YA_NUtagINPUT_TRANSFORM@@@Z @ 0x180017C04 (-IsIdentityTransform@@YA_NUtagINPUT_TRANSFORM@@@Z.c)
 *     ?DeliverInputReport@InputTarget@InputETW@@SAXPEAUInputInfo@@@Z @ 0x180017EB8 (-DeliverInputReport@InputTarget@InputETW@@SAXPEAUInputInfo@@@Z.c)
 *     ??0InputEventPayloadBuffer@@QEAA@UInputEventPayloadHeader@@PEAUInputInfo@@@Z @ 0x1800623CC (--0InputEventPayloadBuffer@@QEAA@UInputEventPayloadHeader@@PEAUInputInfo@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputDestTarget::DeliverInput(InputDestTarget *this, struct InputInfo *a2)
{
  bool v4; // al
  unsigned int v5; // ecx
  __int64 v6; // rdx
  float v7; // xmm1_4
  float v8; // xmm5_4
  float v9; // xmm9_4
  float v10; // xmm6_4
  float v11; // xmm7_4
  float v12; // xmm4_4
  float v13; // xmm8_4
  float v14; // xmm2_4
  float v15; // xmm3_4
  __int64 v16; // r9
  wil::details::in1diag3 *v17; // rcx
  int v18; // edi
  const char *v19; // r9
  __int64 result; // rax
  int v21; // [rsp+38h] [rbp-A0h] BYREF
  void *Block; // [rsp+40h] [rbp-98h]
  _OWORD v23[8]; // [rsp+50h] [rbp-88h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  try
  {
    if ( a2 )
    {
      if ( (*(_BYTE *)a2 & 0x3B) != 0
        && ((v23[0] = *(_OWORD *)((char *)a2 + 392),
             v23[1] = *(_OWORD *)((char *)a2 + 408),
             v23[2] = *(_OWORD *)((char *)a2 + 424),
             v23[3] = *(_OWORD *)((char *)a2 + 440),
             *(float *)v23 != 1.0)
          ? (v4 = 0)
          : (v4 = IsIdentityTransform((float *)v23)),
            !v4 && (v5 = 0, *((_DWORD *)a2 + 12))) )
      {
        while ( 1 )
        {
          v6 = 32LL * v5;
          v7 = (float)*(int *)((char *)a2 + v6 + 68);
          v8 = (float)(*((float *)a2 + 105) * v7) - *((float *)a2 + 103);
          v9 = (float)*(int *)((char *)a2 + v6 + 64);
          v10 = (float)(*((float *)a2 + 101) * v9) - *((float *)a2 + 98);
          v11 = (float)(v9 * *((float *)a2 + 105)) - *((float *)a2 + 102);
          v12 = (float)(*((float *)a2 + 101) * v7) - *((float *)a2 + 99);
          if ( (float)(v10 * v8) == (float)(v12 * v11) )
            break;
          v13 = (float)(v10 * v8) - (float)(v12 * v11);
          v14 = (float)(*((float *)a2 + 113) * v7) - *((float *)a2 + 111);
          v15 = (float)(*((float *)a2 + 113) * v9) - *((float *)a2 + 110);
          *(_DWORD *)((char *)a2 + v6 + 72) = (int)(float)((float)((float)(v14 * v11) - (float)(v15 * v8)) / v13);
          *(_DWORD *)((char *)a2 + v6 + 76) = (int)(float)((float)((float)(v15 * v12) - (float)(v14 * v10)) / v13);
          if ( ++v5 >= *((_DWORD *)a2 + 12) )
            goto LABEL_11;
        }
        v16 = 2147549183LL;
      }
      else
      {
LABEL_11:
        v16 = 0LL;
      }
      v17 = retaddr;
      if ( (int)v16 >= 0 )
      {
        InputEventPayloadBuffer::InputEventPayloadBuffer((__int64)&v21, 4, (int *)a2, (const char *)v16);
        v18 = (*(__int64 (__fastcall **)(struct IInputDeliveryServer *, char *, void *, _QWORD))(*(_QWORD *)NonBamoInputDeliveryServer::s_pNonBamoInputDeliveryServer
                                                                                               + 24LL))(
                NonBamoInputDeliveryServer::s_pNonBamoInputDeliveryServer,
                (char *)this + 24,
                Block,
                v21);
        InputETW::InputTarget::DeliverInputReport(a2);
        if ( v18 >= 0 )
        {
          if ( Block )
            operator delete(Block);
          return 0LL;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x37,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\inputdesttarget.cpp",
            (const char *)(unsigned int)v18);
          if ( Block )
            operator delete(Block);
          return (unsigned int)v18;
        }
      }
    }
    else
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x27,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\inputdesttarget.cpp",
        (const char *)0x80070057LL);
    }
    wil::details::in1diag3::_Throw_Hr(
      v17,
      (void *)0x29,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\inputdesttarget.cpp",
      (const char *)v16);
    JUMPOUT(0x1800831AFLL);
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x3E,
                           (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\inputdesttarget.cpp",
                           v19);
  }
  return result;
}
