/*
 * XREFs of ?Return_HrMsg_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1800AE3A4
 * Callers:
 *     ?GetPoseAtTime@SpatialGraphNodeReference@Holographic@Internal@Windows@@UEAAJ_JPEA_JPEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@@Z @ 0x1800B7EC0 (-GetPoseAtTime@SpatialGraphNodeReference@Holographic@Internal@Windows@@UEAAJ_JPEA_JPEAUSPATIAL_G.c)
 * Callees:
 *     ?ReportFailure_HrMsg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z @ 0x1800637B8 (-ReportFailure_HrMsg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z.c)
 */

void wil::details::in1diag3::Return_HrMsg_NoOriginate(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4,
        unsigned __int16 *a5,
        const char *a6,
        ...)
{
  __int64 v6; // [rsp+20h] [rbp-38h]
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  wil::details::ReportFailure_HrMsg(
    (__int64)this,
    (unsigned int)a2,
    a3,
    a4,
    v6,
    retaddr,
    1,
    (unsigned int)a4,
    a5,
    (va_list)&a6);
}
